/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 01:12:47 by scambier          #+#    #+#             */
/*   Updated: 2025/10/27 01:14:09 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(t_uint64 n, t_uint32 base)
{
	int	out;

	if (!n)
		return (1);
	out = 0;
	while (n)
	{
		n /= base;
		out++;
	}
	return (out);
}
