/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:02:40 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 13:12:30 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int		i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
		i++;
	if (src[i] == c)
		return ((char*)src + i);
	else
		return (NULL);
}
