/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_setvar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:41:03 by scambier          #+#    #+#             */
/*   Updated: 2024/03/19 18:38:31 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

int	ft_bst_setval(t_bst **bst, char *name, char *value)
{
	t_bst	*target;

	target = ft_bst_fetch(bst, name);
	if (!target)
		return (0);
	ft_free((void **)&target->value, ft_strdup(value));
	return (!!target->value);
}
