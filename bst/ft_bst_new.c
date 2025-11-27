/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:34:17 by scambier          #+#    #+#             */
/*   Updated: 2025/11/24 16:41:33 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_bst	*ft_bst_new(char *name, char *value)
{
	t_bst	*out;

	out = ft_calloc(sizeof(t_bst), 1);
	if (!out)
		return (NULL);
	out->name = name;
	out->value = value;
	return (out);
}
