/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:04:41 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/14 20:35:40 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*new_lst_elem;
	t_list	*lst_cpy;

	lst_cpy = lst;
	new_lst = &f(ft_lstnew(lst->content, lst->content_size));
	lst_cpy = lst_cpy->next;
	new_lst_elem = &f(ft_lstnew(lst->content, lst->content_size));
	while (lst_cpy != NULL)

		lst_cpy = lst_cpy->next;

	return (new_list);
}
