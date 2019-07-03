/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:30:00 by lselao            #+#    #+#             */
/*   Updated: 2019/06/23 18:24:22 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	chr;
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	chr = (char)c;
	str = (char *)s;
	while (i <= len)
	{
		if (str[i] == chr)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
