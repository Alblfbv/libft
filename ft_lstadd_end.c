/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <allefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:26:04 by allefebv          #+#    #+#             */
/*   Updated: 2019/11/12 16:24:58 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *elem)
{
	t_list *end;

	if (elem == NULL)
		return ;
	if (*alst == NULL)
		ft_lstadd(alst, elem);
	else
	{
	end = *alst;
	while (end->next != NULL)
		end = end->next;
	end->next = elem;
	elem->next = NULL;
	}
}
