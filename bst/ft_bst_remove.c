/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:46:39 by scambier          #+#    #+#             */
/*   Updated: 2025/11/27 04:01:09 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static void	remove(t_bst **bst, t_bst *new)
{
	ft_free((void **)&(*bst)->name, 0);
	ft_free((void **)&(*bst)->value, 0);
	ft_free((void **)bst, new);
}

int	ft_bst_remove(t_bst **bst, char *name)
{
	t_bst	*temp;
	int		cmp;

	if (!bst || !*bst)
		return (1);
	cmp = ft_strncmp(name, (*bst)->name, ft_strlen(name) + 1);
	if (cmp < 0)
		return (ft_bst_remove(&(*bst)->left, name));
	else if (cmp > 0)
		return (ft_bst_remove(&(*bst)->right, name));
	if (!(*bst)->left)
		remove(bst, (*bst)->right);
	else if (!(*bst)->right)
		remove(bst, (*bst)->left);
	else
	{
		temp = ft_bst_find_min((*bst)->right);
		ft_free((void **)&(*bst)->name, ft_strdup(temp->name));
		ft_free((void **)&(*bst)->value, ft_strdup(temp->value));
		if (!(*bst)->name || !(*bst)->value)
			return (0);
		return (ft_bst_remove(&(*bst)->right, temp->name));
	}
	return (1);
}
