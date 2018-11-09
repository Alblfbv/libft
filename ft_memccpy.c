/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:38:03 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 11:08:50 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_2;
	unsigned char	*src_2;
	unsigned char	c_2;
	unsigned long	i;

	dst_2 = (unsigned char*)dst;
	src_2 = (unsigned char*)src;
	c_2 = (unsigned char)c;
	i = 0;
	while (i < n && src_2[i - 1] != c)
	{
		dst_2[i] = src_2[i];
		i++;
	}
	if (src_2[i - 1] == c)
		return (dst + i);
	return (NULL);
}
