/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:35:07 by lselao            #+#    #+#             */
/*   Updated: 2019/06/23 18:26:50 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t x;
	size_t y;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x] && (x + ft_strlen(needle) <= len))
	{
		y = 0;
		while (haystack[x + y] == needle[y])
		{
			if (y == ft_strlen(needle) - 1)
				return ((char*)&haystack[x]);
			y++;
		}
		x++;
	}
	return (0);
}
