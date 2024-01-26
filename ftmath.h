/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:48:19 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 15:07:17 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATH_H
# define FTMATH_H

float	ft_fmin(float a, float b);
float	ft_fmax(float a, float b);
float	ft_fabs(float x);
float	ft_fclamp(float min, float x, float max);

int		ft_min(int a, int b);
int		ft_max(int a, int b);
int		ft_abs(int x);
int		ft_clamp(int min, int x, int max);

#endif