/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 00:55:05 by scambier          #+#    #+#             */
/*   Updated: 2025/12/01 01:00:14 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

int	ft_atoc(t_color *out, char *str)
{
	if (ft_atohc(out, str))
		return (1);
	if (ft_atodc(out, str))
		return (1);
	return (0);
}
