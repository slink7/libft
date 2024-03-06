/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 03:22:12 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:30:21 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIT_H
# define BIT_H

unsigned int	ft_bit_get(int	*src, int b);
void			ft_bit_set(int *src, int b, int v);
void			ft_bit_invert(int *src, int b);

#endif