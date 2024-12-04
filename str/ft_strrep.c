/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:31:50 by scambier          #+#    #+#             */
/*   Updated: 2024/12/04 17:37:18 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrep(char *str, char from, char to)
{
	int	out;
	int	k;

	out = 0;
	k = -1;
	while (str[++k])
		if (str[k] == from && ++out)
			str[k] = to;
	return (out);
}
