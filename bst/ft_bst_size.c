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

int	ft_bst_size(t_bst *bst)
{
	if (!bst)
		return (0);
	return (ft_bst_size(bst->left) + ft_bst_size(bst->right) + 1);
}
