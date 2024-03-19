/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:46:39 by scambier          #+#    #+#             */
/*   Updated: 2024/03/19 19:11:56 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static void	remove(t_bst **bst)
{
	ft_var_free(&(*bst)->var);
	free(*bst);
	*bst = 0;

}

t_bst	*ft_bst_remove(t_bst **bst, char *name)
{
	t_bst	**target;
	t_bst	*temp;
	
	target = ft_bst_find(bst, name);
	if (!target)
		return (0);
	if (!(*target)->left)
	{
		temp = (*target)->right;
		remove(target);
		return (temp);
	}
	else if (!(*target)->right)
	{
		temp = (*target)->right;
		remove(target);
		return (temp);
	}
	temp = ft_bst_find_min(*bst);
	(*target)->var = temp->var;
	(*target)->right = ft_bst_remove(&(*target)->right, temp->var->name);
	return (*target);
}
