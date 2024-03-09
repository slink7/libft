/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:47:01 by scambier          #+#    #+#             */
/*   Updated: 2024/03/07 15:13:14 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define INT_MAX 2147483647l
#define INT_MIN -2147483648l

int	ft_atoi_strict(int *out, char *in)
{
	int		sign;
	long	nbr;

	*out = 0;
	nbr = 0;
	sign = 1;
	if (*in == '-' && in++)
		sign = -1;
	while (*in)
	{
		if (!ft_isdigit(*in))
			return (0);
		nbr = nbr * 10 + *in - '0';
		in++;
	}
	nbr *= sign;
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (0);
	*out = nbr;
	return (1);
}
