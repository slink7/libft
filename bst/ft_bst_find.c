/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:42:36 by scambier          #+#    #+#             */
/*   Updated: 2024/03/19 19:07:30 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bst	**ft_bst_find(t_bst **bst, char *name)
{
	int	cmp;

	if (!bst || !*bst)
		return (0);
	cmp = ft_strncmp(name, (*bst)->var->name, ft_strlen(name) + 1);
	if (cmp == 0)
		return (bst);
	else if (cmp < 0)
		return (ft_bst_find(&(*bst)->left, name));
	else
		return (ft_bst_find(&(*bst)->right, name));
}
