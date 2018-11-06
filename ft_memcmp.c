/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:12:48 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/06 16:09:03 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*s1p;
	unsigned char	*s2p;
	int				i;

	s1p = (unsigned char*)s1;
	s2p = (unsigned char*)s2;
	i = 0;
	while (i < len && s1p[i] == s2p[i])
		i++;
	if (i == len)
		return (0);
	return (s1p[i] - s2p[i]);
}
