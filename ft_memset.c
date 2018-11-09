/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:45:02 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 11:07:35 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*s_2;
	unsigned long	i;

	s_2 = (unsigned char*)s;
	i = 0;
	while (i < len)
	{
		s_2[i] = c;
		i++;
	}
	return (s);
}
