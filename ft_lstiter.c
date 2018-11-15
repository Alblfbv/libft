/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:17:21 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/15 13:08:46 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *))
{
	t_list	*save_next;

	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		save_next = lst->next;
		f(lst);
		lst = save_next;
	}
}
