/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:32:12 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 10:32:39 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t len)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(str) * (len + 1))))
		return (NULL);
	ft_bzero(str, len + 1);
	return (str);
}
