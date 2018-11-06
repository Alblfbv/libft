/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:20:09 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/06 18:54:32 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_2;
	unsigned char	*src_2;
	int				i;

	dst_2 = (unsigned char*)dst;
	src_2 = (unsigned char*)src;
	
	i = 0;
	while (i < n)
	{
		if (dst_2 > src_2)
			dst_2[n - i] = src_2[n - i];
		else
			dst_2[i] = src_2[i];
		i++;
	}
	return (dst);	
}
