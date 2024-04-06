/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:42:17 by scambier          #+#    #+#             */
/*   Updated: 2024/04/06 15:47:40 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bst_print(t_bst *bst)
{
	if (!bst)
		return ;
	ft_bst_print(bst->left);
	ft_printf("\'%s\'=\'%s\'\n", bst->var->name, bst->var->value);
	ft_bst_print(bst->right);
}
