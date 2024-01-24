/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:10 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 17:52:10 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t	k;
	int		diff;

	k = 0;
	while (k < n)
	{
		diff = *(unsigned char *)(p1 + k) - *(unsigned char *)(p2 + k);
		if (diff != 0)
			return (diff);
		k++;
	}
	return (0);
}
