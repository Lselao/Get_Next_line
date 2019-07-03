/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:42:14 by lselao            #+#    #+#             */
/*   Updated: 2019/06/13 18:46:53 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	chr;
	size_t			i;

	i = 0;
	chr = (unsigned char)c;
	source = (unsigned char *)src;
	dest = dst;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == chr)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
