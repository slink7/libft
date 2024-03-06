/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:38:48 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:02:30 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_var_free(t_var **var)
{
	free((*var)->name);
	if ((*var)->value)
		free((*var)->value);
	free(*var);
	*var = 0;
}
