/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <allefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:17:21 by allefebv          #+#    #+#             */
/*   Updated: 2019/11/12 16:24:56 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parcourt la liste lst en appliquant à chaque maillon la fonction f.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *))
{
	t_list	*save_next;

	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		save_next = lst->next;
		f(lst);
		lst = save_next;
	}
}
