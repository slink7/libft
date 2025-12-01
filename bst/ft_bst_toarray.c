/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_toarray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 03:03:37 by scambier          #+#    #+#             */
/*   Updated: 2025/11/28 03:51:54 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"
#include "ft_printf.h"
#include "mem.h"
#include "str.h"

static void	ft_bst_toarray_rec(t_bst *bst, char **var, char **val, int *k)
{
	if (!bst)
		return ;
	ft_bst_toarray_rec(bst->left, var, val, k);
	if (var)
		var[*k] = ft_strdup(bst->name);
	if (val)
		val[*k] = ft_strdup(bst->value);
	(*k)++;
	ft_bst_toarray_rec(bst->right, var, val, k);
}

int	ft_bst_toarray(t_bst *bst, char ***var, char ***val)
{
	char	**temp[2];
	int		size;
	int		k;

	if (!bst || (!var && !val))
		return (0);
	ft_memset(temp, 0, sizeof(char **[2]));
	size = ft_bst_size(bst);
	if (var)
	{
		*var = ft_calloc(size + 1, sizeof(char *));
		temp[0] = *var;
	}
	if (val)
	{
		*val = ft_calloc(size + 1, sizeof(char *));
		temp[1] = *val;
	}
	k = 0;
	ft_bst_toarray_rec(bst, temp[0], temp[1], &k);
	return (k);
}
