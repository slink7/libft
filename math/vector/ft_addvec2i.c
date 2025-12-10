/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addvec2i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 20:51:09 by scambier          #+#    #+#             */
/*   Updated: 2025/12/10 21:00:22 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"

void	ft_addvec2i(t_vec2i *out, t_vec2i *a, t_vec2i *b)
{
	t_vec2i	temp;

	temp = *a;
	out->x = temp.x + b->x;
	out->y = temp.y + b->y;
}
