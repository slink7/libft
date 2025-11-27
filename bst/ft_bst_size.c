/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymostows <ymostows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:52:00 by ymostows          #+#    #+#             */
/*   Updated: 2024/03/19 14:52:00 by ymostows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_bst_size_rec(t_bst *bst, int *out)
{
	if (!bst)
		return ;
	(*out)++;
	ft_bst_size_rec(bst->left, out);
	ft_bst_size_rec(bst->right, out);
}

int	ft_bst_size(t_bst *bst)
{
	int	out;

	out = 0;
	ft_bst_size_rec(bst, &out);
	return (out);
}
