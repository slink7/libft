/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bindump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:38:51 by scambier          #+#    #+#             */
/*   Updated: 2024/05/28 17:26:44 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "libft.h"

#define HEX "0123456789ABCDEF"

static void	put_bin_line(char *ptr, int len, int bpl)
{
	char	*buffer;
	int		k;
	int		l;

	buffer = ft_calloc(bpl * 13 + 3, sizeof(char *));
	ft_memset(buffer, 32, bpl * 13 + 2);
	buffer[bpl * 11 - 1] = '|';
	buffer[bpl * 13] = '|';
	buffer[bpl * 13 + 1] = '\n';
	k = -1;
	while (++k < len * 8)
	{
		l = 8 * (k / 8) + (7 - (k % 8));
		buffer[l + l / 4 + l / 8] = ((ptr[k / 8] >> (k % 8)) & 1) + '0';
	}
	k = -1;
	while (++k < ft_min(bpl, len) * 2)
	{
		if (k % 2)
			buffer[k + bpl * 11] = HEX[ptr[k / 2] & 0b1111];
		else
			buffer[k + bpl * 11] = HEX[(ptr[k / 2] >> 4) & 0b1111];
	}
	write(1, buffer, bpl * 13 + 2);
	free(buffer);
}

void	ft_bindump(char *ptr, int len, int bpl)
{
	while (len > 0)
	{
		put_bin_line(ptr, ft_min(len, bpl), bpl);
		ptr += bpl;
		len -= bpl;
	}
}
