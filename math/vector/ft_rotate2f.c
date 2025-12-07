/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate2f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:16:39 by scambier          #+#    #+#             */
/*   Updated: 2025/12/07 18:32:34 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

#include "ftmath.h"

void	ft_rotate2f(t_vec2f *vec, float theta)
{
	t_vec2f	tmp_vec;

	tmp_vec = *vec;
	vec->x = tmp_vec.x * cos(theta) - tmp_vec.y * sin(theta);
	vec->y = tmp_vec.x * sin(theta) + tmp_vec.y * cos(theta);
}
