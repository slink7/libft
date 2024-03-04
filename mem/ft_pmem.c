/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pmem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:51:23 by scambier          #+#    #+#             */
/*   Updated: 2024/03/04 17:59:03 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

static void	ft_fillnbr_base(char *buffer, int bsize, long long nbr, int base)
{
	static char	*dictionnary = "0123456789ABCDEF";

	if (nbr > (base - 1))
		ft_fillnbr_base(buffer, bsize - 1, nbr / base, base);
	buffer[bsize - 1] = dictionnary[nbr % base];
}

static void	fill(char *str, char v, int s)
{
	int	k;

	k = 0;
	while (k < s)
		*(str + k++) = v;
}

static void	print_couple(void *addr, int offset, int max_offset)
{
	char	c[2];

	if (offset > max_offset - 1)
		write(1, "  ", 2);
	else
	{
		fill(c, '0', 2);
		ft_fillnbr_base(c, 2, *((unsigned char *)addr + offset), 16);
		write(1, c, 2);
	}
	if (offset + 1 > max_offset - 1)
		write(1, "  ", 2);
	else
	{
		fill(c, '0', 2);
		ft_fillnbr_base(c, 2, *((unsigned char *)addr + offset + 1), 16);
		write(1, c, 2);
	}
}

static void	ft_put_buffer(void *addr, int max)
{
	int	k;

	k = 0;
	while (k < 16)
	{
		print_couple(addr, k, max);
		write(1, " ", 1);
		k += 2;
	}
	while (k >= 1 && k >= 16 - max + 1)
	{
		if (*((unsigned char *)addr) < 32 || *((unsigned char *)addr) >= 127)
			write(1, ".", 1);
		else
			write(1, addr, 1);
		addr++;
		k--;
	}
}

void	ft_pmem(void *ptr, int len)
{
	char	buffer[16];

	ft_memset(buffer, '0', 16);
	ft_fillnbr_base(buffer, 16, (long long)ptr, 16);
	write(1, buffer, 16);
	write(1, ": ", 2);
	ft_put_buffer(ptr, len);
	write(1, "\n", 1);
	if (len > 0)
		ft_pmem(ptr + 16, len - 16);
}
