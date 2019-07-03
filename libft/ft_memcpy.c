/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:32:36 by lselao            #+#    #+#             */
/*   Updated: 2019/06/18 17:43:21 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s2 = (char *)src;
	s1 = (char *)dst;
	if (s1 == '\0' && s2 == '\0')
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
