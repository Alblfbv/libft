/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:04:41 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/15 11:55:01 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*new_elm;

	if (lst == NULL)
		return (NULL);
	begin = f(ft_lstnew(lst->content, lst->content_size));
	new_elm = begin;
	while (lst != NULL)
	{
		new_elm->next = f(ft_lstnew(lst->content, lst->content_size));
		new_elm = new_elm->next;
		lst = lst->next;
	}
	return (begin);
}
