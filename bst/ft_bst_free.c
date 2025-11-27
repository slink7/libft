/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:38:17 by scambier          #+#    #+#             */
/*   Updated: 2025/11/24 16:22:43 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_bst_free(t_bst **bst)
{
	if (!bst || !*bst)
		return ;
	ft_bst_free(&(*bst)->left);
	ft_bst_free(&(*bst)->right);
	ft_free((void **)&(*bst)->name, 0);
	ft_free((void **)&(*bst)->value, 0);
	ft_free((void **)bst, 0);
}
