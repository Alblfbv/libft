/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:04:41 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/14 20:08:02 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, (*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *lst_next;

	new_lst = ft_lstnew(lst->content, lst->content_size)
	while (lst->next != NULL)
		new_lst->next =  
		lst_next
	ft_lstiter(lst, &f);
	
}
