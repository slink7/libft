/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_balance.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 02:58:30 by scambier          #+#    #+#             */
/*   Updated: 2025/11/28 04:45:01 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"
#include "str.h"

void	ft_bst_balance_rec(t_bst **out, char **var[2], int start, int end)
{
	int	mid;

	if (!out || start > end)
		return ;
	mid = (start + end) / 2;
	ft_bst_setval(out, var[0][mid], var[1][mid]);
	ft_bst_balance_rec(out, var, start, mid - 1);
	ft_bst_balance_rec(out, var, mid + 1, end);
}

void	ft_bst_balance(t_bst **bst)
{
	char	**temp[2];
	t_bst	*out;
	int		size;

	size = ft_bst_toarray(*bst, &temp[0], &temp[1]);
	
	out = 0;
	ft_bst_balance_rec(&out, temp, 0, size - 1);

	ft_strarrfree(temp[0]);
	ft_strarrfree(temp[1]);

	ft_bst_free(bst);
	*bst = out;
}
