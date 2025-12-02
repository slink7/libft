/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lehmer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 03:34:15 by scambier          #+#    #+#             */
/*   Updated: 2025/12/02 04:59:25 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rand.h"

#define MGK_A 0xe120fc15
#define MGK_B 0x4a39b70d
#define MGK_C 0x12fad5c9

unsigned int	ft_lehmer(void)
{
	unsigned int	*seed;
	unsigned long	tmp;
	unsigned int	m1;
	unsigned int	m2;

	seed = ft_get_seed();
	*seed += MGK_A;
	tmp = (unsigned long)*seed * MGK_B;
	m1 = (tmp >> 32) ^ tmp;
	tmp = (unsigned long)m1 * MGK_C;
	m2 = (tmp >> 32) ^ tmp;
	return (m2);
}
