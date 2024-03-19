/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:46:39 by scambier          #+#    #+#             */
/*   Updated: 2024/03/19 18:28:50 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_bst	*ft_bst_remove(t_bst **bst, char *name)
{
	t_bst	*temp;
	int		cmp;

	if (!bst || !*bst)
		return (0);
	cmp = ft_strncmp(name, (*bst)->var->name, ft_strlen(name) + 1);
	if (cmp < 0)
		ft_bst_remove(&(*bst)->left, name);
	else if (cmp > 0)
		ft_bst_remove(&(*bst)->right, name);
	else
	{
		if (!(*bst)->left)
		{
			temp = (*bst)->right;
			ft_var_free(&(*bst)->var);
			free(*bst);
			*bst = 0;
			return (temp);
		}
		else if (!(*bst)->right)
		{
			temp = (*bst)->left;
			ft_var_free(&(*bst)->var);
			free(*bst);
			*bst = 0;
			return (temp);
		}
		temp = ft_bst_find_min(*bst);
		(*bst)->var = temp->var;
		(*bst)->right = ft_bst_remove(&(*bst)->right, temp->var->name);
	}
	return (*bst);
}
