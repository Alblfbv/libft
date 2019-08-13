/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_inorder_print.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <allefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:28:26 by allefebv          #+#    #+#             */
/*   Updated: 2019/08/13 15:56:12 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_inorder_print(t_tree *root, void (*ft_print)(void*))
{
	if (!root)
		return ;
	ft_tree_inorder_print(root->left, ft_print);
	ft_print(root->content);
	ft_tree_inorder_print(root->right, ft_print);
}
