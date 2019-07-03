/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 16:11:34 by lselao            #+#    #+#             */
/*   Updated: 2019/06/24 18:36:08 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t x;
	size_t y;

	x = 0;
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y] != '\0' && haystack[x + y] == needle[y])
			y++;
		if (needle[y] == '\0')
			return ((char *)&haystack[x]);
		x++;
	}
	return (0);
}
