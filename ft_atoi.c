/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:23:31 by scambier          #+#    #+#             */
/*   Updated: 2023/11/14 15:53:35 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tvnrf(char *c)
{
	return ((*c < 9 || *c > 13) && *c != 32);
}

int	ft_atoi(const char *nptr)
{
	long	out;
	int		sign;

	out = 0;
	sign = 1;
	while (!tvnrf((char *)nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr)
	{
		if (!ft_isdigit(*nptr))
			break ;
		out = out * 10 + *nptr - '0';
		nptr++;
	}
	return (out * sign);
}
