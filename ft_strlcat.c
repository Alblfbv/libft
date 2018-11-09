/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:57:03 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 17:28:56 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	dst_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
	{
		dst[i] = '\0';
		return ((unsigned long)ft_strlen(src) + dst_len);
	}
	return ((unsigned long)ft_strlen(src) + size);
}
