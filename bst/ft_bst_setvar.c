/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bst_setvar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:41:03 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:04:52 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_bst_setvar(t_bst **bst, char *name, char *value)
{
	t_var	*var;

	var = ft_bst_fetch(bst, name);
	if (var->value)
		free(var->value);
	var->value = ft_strdup(value);
}
