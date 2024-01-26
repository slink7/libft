/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:00:50 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 20:54:07 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(char *str, char *base)
{
	int		ibase;
	int		sign;
	int		out;

	ibase = ft_strlen(base);
	sign = 1;
	out = 0;
	while ((*str && *str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *str != '\n' && ft_strchri(base, *str) >= 0)
	{
		out *= ibase;
		out += ft_strchri(base, *str);
		str++;
	}
	return (sign * out);
}
