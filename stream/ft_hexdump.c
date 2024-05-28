/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:25:45 by scambier          #+#    #+#             */
/*   Updated: 2024/05/28 18:07:17 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "libft.h"

#define HEX "0123456789ABCDEF"

static void	put_hex_line(char *ptr, int len, int bpl)
{
	char	*buffer;
	int		k;
	int		l;

	buffer = ft_calloc(bpl * 4 + 3, sizeof(char *));
	ft_memset(buffer, 32, bpl * 4);
	buffer[bpl * 4 + 1] = '\n';
	buffer[bpl * 3 - 1] = '|';
	buffer[bpl * 4] = '|';
	k = -1;
	while (++k < len * 2)
	{
		l = 2 * (k / 2) + 1 - k % 2;
		buffer[l + l / 2] = HEX[(ptr[k / 2] >> (k % 2) * 4) & 0b1111];
	}
	k = -1;
	while (++k < len)
	{
		if (ft_isprint(ptr[k]))
			buffer[bpl * 3 + k] = ptr[k];
		else
			buffer[bpl * 3 + k] = '.';
	}
	write(1, buffer, bpl * 4 + 3);
	free(buffer);
}

void	ft_hexdump(char *ptr, int len, int bpl)
{
	while (len > 0)
	{
		put_hex_line(ptr, ft_min(len, bpl), bpl);
		ptr += bpl;
		len -= bpl;
	}
}
