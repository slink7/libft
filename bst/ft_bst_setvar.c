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

void	ft_bst_setvar(t_bst **bst, char *name, char *value)
{
	t_bst	*target;

	target = ft_bst_fetch(bst, name);
	if (target->var->value)
		free(target->var->value);
	target->var->value = ft_strdup(value);
}
