/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:36:03 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/15 12:35:40 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystk, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystk);
	while (haystk[i] != '\0')
	{
		j = 0;
		while (haystk[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)haystk + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
