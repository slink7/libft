/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_depth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 03:58:19 by scambier          #+#    #+#             */
/*   Updated: 2025/11/28 05:06:55 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"
#include "ftmath.h"

int	ft_bst_depth(t_bst *bst)
{
	int	left_depth;
	int	right_depth;

	if (!bst)
		return (0);
	left_depth = ft_bst_depth(bst->left);
	right_depth = ft_bst_depth(bst->right);
	return (ft_max(left_depth, right_depth) + 1);
}
