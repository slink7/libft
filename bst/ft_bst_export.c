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

static void	ft_bst_export_rec(t_bst *bst, char **out, int *i)
{
	if (!bst)
		return ;
	ft_bst_export_rec(bst->left, out, i);
	out[(*i)++] = ft_strsjoin((char *[]){
			bst->name, "=", bst->value, 0
		}, "");
	ft_bst_export_rec(bst->right, out, i);
}

char	**ft_bst_export(t_bst *bst)
{
	char	**out;
	int		i;

	if (!bst)
		return (0);
	out = ft_calloc(ft_bst_size(bst) + 1, sizeof(char *));
	if (!out)
		return (0);
	i = 0;
	ft_bst_export_rec(bst, out, &i);
	return (out);
}
