/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:42:36 by scambier          #+#    #+#             */
/*   Updated: 2025/11/27 04:51:11 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bst	*ft_bst_find_rec(t_bst *bst, char *name, int len)
{
	int	cmp;

	if (!bst | !name)
		return (0);
	cmp = ft_strncmp(name, bst->name, len);
	if (cmp == 0)
		return (bst);
	else if (cmp < 0)
		return (ft_bst_find_rec(bst->left, name, len));
	else
		return (ft_bst_find_rec(bst->right, name, len));
}

t_bst	*ft_bst_find(t_bst *bst, char *name)
{
	return (ft_bst_find_rec(bst, name, ft_strlen(name) + 1));
}
