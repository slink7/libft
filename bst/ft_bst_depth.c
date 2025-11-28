/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_depth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 03:58:19 by scambier          #+#    #+#             */
/*   Updated: 2025/11/28 04:58:32 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

int	ft_bst_depth(t_bst *bst)
{
	int	left_depth;
	int	right_depth;

	if (!bst)
		return (0);
	left_depth = ft_bst_depth(bst->left);
	right_depth = ft_bst_depth(bst->right);
	if (left_depth > right_depth)
		return (left_depth + 1);
	return (right_depth + 1);
}
