/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 23:10:15 by scambier          #+#    #+#             */
/*   Updated: 2025/12/01 00:51:58 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "ft_printf.h"

int	ft_print_color(t_color col)
{
	return (ft_printf("%#010x (%u, %u, %u, %u)\n",
			col.raw,
			(unsigned int)col.rgba[R],
			(unsigned int)col.rgba[G],
			(unsigned int)col.rgba[B],
			(unsigned int)col.rgba[A]
		)
	);
}
