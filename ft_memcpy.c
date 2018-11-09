/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:47:30 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 11:08:29 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_2;
	unsigned char	*src_2;
	unsigned long	i;

	dst_2 = (unsigned char*)dst;
	src_2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst_2[i] = src_2[i];
		i++;
	}
	return (dst);
}
