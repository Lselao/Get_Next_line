/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Get_Next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 18:22:37 by lselao            #+#    #+#             */
/*   Updated: 2019/07/06 02:18:01 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*lnspliter(char **s, char **line, int fd)
{
	char	*cup;
	int		i;

	i = 0;
	while (s[fd][i] != '\n' && s[fd][i] != '\0')
		i++;
	if (s[fd][i] == '\n')
	{
		*line = ft_strsub(s[fd], 0, i);
		cup = ft_strdup(s[fd] + i + 1);
		free(s[fd]);
		s[fd] = cup;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][i] == '\0')
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (*line);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s[50];
	char		buf[BUFF_SIZE + 1];
	char		*cup;
	int			stdbytes;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((stdbytes = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[stdbytes] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(0);
		cup = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = cup;
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (stdbytes < 0)
		return (-1);
	else if (stdbytes == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	*line = lnspliter(s, line, fd);
	return (1);
}
