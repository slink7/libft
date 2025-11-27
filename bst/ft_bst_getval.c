/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_getval.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:40:09 by scambier          #+#    #+#             */
/*   Updated: 2025/11/27 04:59:27 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_bst_getval(t_bst *bst, char *name)
{
	t_bst	*temp;

	temp = ft_bst_find(bst, name);
	if (!temp)
		return (0);
	return (temp->value);
}
