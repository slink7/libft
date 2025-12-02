/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_seed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 03:27:19 by scambier          #+#    #+#             */
/*   Updated: 2025/12/02 04:59:16 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DEFAULT_SEED 0x00000000

unsigned int	*ft_get_seed(void)
{
	static unsigned int	seed = DEFAULT_SEED;

	return (&seed);
}
