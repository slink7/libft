/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_fetch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:39:26 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:07:02 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_var	*ft_bst_fetch(t_bst **bst, char *name)
{
	int	cmp;

	if (!*bst)
		*bst = ft_bst_new(ft_var_new(ft_strdup(name)));
	cmp = ft_strncmp(name, (*bst)->var->name, ft_strlen(name) + 1);
	if (cmp == 0)
		return ((*bst)->var);
	else if (cmp < 0)
		return (ft_bst_fetch(&(*bst)->left, name));
	else
		return (ft_bst_fetch(&(*bst)->right, name));
}
