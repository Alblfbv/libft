/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:28:12 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 20:33:43 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *str)
{
	int		i;
	int		len;
	char	*new;

	i = 0;
	len = ft_strlen(str) - 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[len] == ' ' || str[len] == '\n' || str[len] == '\t')
		len--;
	if (i != ft_strlen(str))
	{
		if (!(new = ft_strsub(str, i, (len - i + 1))))
			return (NULL);
	}
	else
	{
		if (!(new = (char*)malloc(sizeof(new) * ft_strlen(str))))
			return (NULL);
		ft_bzero(new, ft_strlen(str));
	}
	return (new);
}
