/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_export.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymostows <ymostows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:45:26 by ymostows          #+#    #+#             */
/*   Updated: 2024/03/19 14:45:26 by ymostows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_bst_export_rec(t_bst *bst, char **array, int *i)
{
	if (!bst)
		return ;
	ft_bst_export_rec(bst->left, array, i);
	array[(*i)++] = ft_strjoin_free(ft_strjoin(bst->var->name, "="), bst->var->value);
	ft_bst_export_rec(bst->right, array, i);
}

char	**ft_bst_export(t_bst *bst)
{
	char	**array;
	int		i;

	if (!bst)
		return (0);
	array = ft_calloc(ft_bst_size(bst) + 1, sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	ft_bst_export_rec(bst, array, &i);
	return (array);
}
