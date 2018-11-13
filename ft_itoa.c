/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:26:55 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/13 17:53:35 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_int_size(int n)
{
	int				tab_size;
	unsigned int	cpy;

	tab_size = 1;
	cpy = n;
	if (n < 0)
	{
		tab_size++;
		cpy = n * -1;
	}
	while (cpy >= 10)
	{
		tab_size++;
		cpy = cpy / 10;
	}
	return (tab_size);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	cpy;

	i = 0;
	cpy = n;
	if (!(str = ft_strnew(ft_int_size(n))))
		return (NULL);
	if (n < 0)
		cpy = n * -1;
	while (cpy >= 10)
	{
		str[i] = cpy % 10 + 48;
		cpy = cpy / 10;
		i++;
	}
	str[i] = cpy + 48;
	if (n < 0)
	{
		i++;
		str[i] = '-';
	}
	str = ft_strrev(str);
	return (str);
}
