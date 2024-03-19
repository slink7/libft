/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_find_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:01:05 by scambier          #+#    #+#             */
/*   Updated: 2024/03/19 18:12:52 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bst	*ft_bst_find_min(t_bst *bst)
{
	t_bst	*out;

	if (!bst)
		return (0);
	out = ft_bst_find_min(bst->left);
	if (!out)
		out = bst;
	return (out);
}