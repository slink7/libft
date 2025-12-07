/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divvec2f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:43:10 by scambier          #+#    #+#             */
/*   Updated: 2025/12/07 18:54:41 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"

void	ft_divvec2f(t_vec2f *out, t_vec2f *a, float scalar)
{
	out->x = a->x / scalar;
	out->y = a->y / scalar;
}
