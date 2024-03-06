/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:38:17 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:03:23 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_bst_free(t_bst **bst)
{
	if (!bst || !*bst)
		return ;
	ft_bst_free(&(*bst)->left);
	ft_var_free(&(*bst)->var);
	ft_bst_free(&(*bst)->right);
	free(*bst);
	*bst = 0;
}
