/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:41:59 by lselao            #+#    #+#             */
/*   Updated: 2019/06/18 17:52:27 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *xdst;
	unsigned char *xsrc;

	xdst = dst;
	xsrc = (unsigned char *)src;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			xdst[len] = xsrc[len];
		}
	}
	return (dst);
}
