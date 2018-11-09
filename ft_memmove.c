/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:20:09 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 14:36:34 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_2;
	unsigned char	*src_2;
	unsigned long	i;

	dst_2 = (unsigned char*)dst;
	src_2 = (unsigned char*)src;
	i = n;
	if (dst_2 > src_2)
		while (n)
		{
			dst_2[n - 1] = src_2[n - 1];
			n--;
		}
	else
		ft_memcpy(dst_2, src_2, i);
	return (dst);
}
