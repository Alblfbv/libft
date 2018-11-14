/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:34:56 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/14 14:55:49 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystk, const char *needle, int n)
{
	int		i;
	int		j;

	i = 0;
	while (haystk[i] != '\0' && i < n)
	{
		j = 0;
		while (haystk[i] == needle[j] && needle[j] != '\0'
			&& haystk[i] != '\0' && i < n)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char*)haystk + i - j);
		i++;
	}
	return (NULL);
}
