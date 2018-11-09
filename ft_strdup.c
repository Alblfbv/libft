/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:04:04 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 10:29:26 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*strcpy;
	int		i;

	strcpy = (char*)malloc(sizeof(ft_strlen(str) + 1));
	if (!strcpy)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		strcpy[i] = str[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
