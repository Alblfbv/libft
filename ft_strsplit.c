/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:58:09 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/12 16:51:02 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_create(char *dest, char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
		i++;
	if (!(dest = (char*)malloc(sizeof(dest) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i] != c && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_size(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
			j++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c)
			i++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**s_str;
	int		i;
	int		j;

	if (!(s_str = (char**)malloc(sizeof(s_str) * (ft_size(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			if (!(s_str[j] = ft_create(s_str[j], (char*)s + i, c)))
				return (NULL);
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	s_str[j] = 0;
	return (s_str);
}
