/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mulvec2f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:40:11 by scambier          #+#    #+#             */
/*   Updated: 2025/12/07 18:42:25 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"

void	ft_mulvec2f(t_vect2f *out, t_vec2f *vec, float scalar)
{
	out->x = vec->x * scalar;
	out->y = vec->y * scalar;
}
