/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 22:21:59 by scambier          #+#    #+#             */
/*   Updated: 2025/12/01 00:52:51 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# define R 3
# define G 2
# define B 1
# define A 0

typedef union u_color
{
	int				raw;
	unsigned char	rgba[4];
}	t_color;

int	ft_atohc(t_color *out, char *str);
int	ft_atodc(t_color *out, char *str);
int	ft_atoc(t_color *out, char *str);
int	ft_print_color(t_color c);

#endif
