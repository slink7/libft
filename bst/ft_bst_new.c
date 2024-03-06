/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:34:17 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:04:18 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_bst	*ft_bst_new(t_var	*var)
{
	t_bst	*out;

	out = malloc(sizeof(t_bst));
	out->var = var;
	out->left = 0;
	out->right = 0;
	return (out);
}
