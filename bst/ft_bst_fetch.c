/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_fetch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:39:26 by scambier          #+#    #+#             */
/*   Updated: 2025/11/24 16:41:30 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bst	*ft_bst_fetch(t_bst **bst, char *name)
{
	int		cmp;
	char	*tmp_name;

	if (!*bst)
	{
		tmp_name = ft_strdup(name);
		if (!tmp_name)
			return (NULL);
		*bst = ft_bst_new(tmp_name, 0);
		if (!(*bst))
			return (ft_free((void **)&tmp_name, 0), NULL);
		return (*bst);
	}
	cmp = ft_strncmp(name, (*bst)->name, ft_strlen(name) + 1);
	if (cmp == 0)
		return (*bst);
	else if (cmp < 0)
		return (ft_bst_fetch(&(*bst)->left, name));
	else
		return (ft_bst_fetch(&(*bst)->right, name));
}
