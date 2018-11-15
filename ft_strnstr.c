/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:34:56 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/15 14:48:26 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystk, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystk[i] != '\0' && i < len)
	{
		j = 0;
		while (haystk[i] == needle[j] && needle[j] != '\0'
			&& haystk[i] != '\0' && i < len)
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
