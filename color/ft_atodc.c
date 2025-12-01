/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atodc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 23:59:20 by scambier          #+#    #+#             */
/*   Updated: 2025/12/01 00:58:24 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "str.h"
#include "char.h"

static int	color_sep(int c)
{
	return (!!ft_strchr(", \t", c));
}

int	ft_atodc(t_color *out, char *str)
{
	int		raw;
	int		k;

	raw = 0;
	k = -1;
	while (++k < 4)
	{
		raw = raw << 8 | (ft_atoi(str) & 0xFF);
		str = ft_strchrf(str, ft_isdigit, 1);
		if (!str)
			break ;
		str = ft_strchrf(str, color_sep, 1);
		if (!str)
			break ;
	}
	if (k != 2 && k != 3)
		return (0);
	if (k == 2)
		raw <<= 8;
	out->raw = raw;
	return (1);
}
