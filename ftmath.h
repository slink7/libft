/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:48:19 by scambier          #+#    #+#             */
/*   Updated: 2025/12/07 18:54:36 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATH_H
# define FTMATH_H

typedef struct s_vec2f
{
	float	x;
	float	y;
}	t_vec2f;

float	ft_dot2f(t_vec2f *a, t_vec2f *b);
void	ft_rotate2f(t_vec2f *vec, float	θ);
void	ft_addvec2f(t_vec2f *out, t_vec2f *a, t_vec2f *b);
void	ft_subvec2f(t_vec2f *out, t_vec2f *a, t_vec2f *b);
void	ft_mulvec2f(t_vec2f *out, t_vec2f *a, float scalar);
void	ft_divvec2f(t_vec2f *out, t_vec2f *a, float	scalar);

float	ft_fmin(float a, float b);
float	ft_fmax(float a, float b);
float	ft_fabs(float x);
float	ft_fclamp(float min, float x, float max);

int		ft_min(int a, int b);
int		ft_max(int a, int b);
int		ft_abs(int x);
int		ft_clamp(int min, int x, int max);

#endif
