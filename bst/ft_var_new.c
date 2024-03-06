/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:33:36 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:05:01 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_var	*ft_var_new(char *name)
{
	t_var	*out;

	out = malloc(sizeof(t_var));
	out->name = name;
	out->value = 0;
	return (out);
}
