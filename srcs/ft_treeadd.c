/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <allefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:22:53 by allefebv          #+#    #+#             */
/*   Updated: 2019/08/13 17:32:32 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_comp return values :
** 1 if node->key >= *root->key
** 0 if node->key < *root->key
*/

int		ft_treeadd(t_tree **root, t_tree *node, int (*ft_comp)(void*, void*))
{
	if (node == NULL)
		return (0);
	if (*root == NULL)
	{
		*root = node;
		return (0);
	}
	if (ft_comp((*root)->content, node->content) < 0)
		ft_treeadd(&(*root)->right, node, ft_comp);
	else
		ft_treeadd(&(*root)->left, node, ft_comp);
	return (1);
}
