/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:09:43 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 20:54:37 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

int	ft_putnbr_base_fd(long nbr, char *base, int fd)
{
	int			ibase;
	long int	cast;
	int			out;

	ibase = ft_strlen(base);
	cast = nbr;
	out = 0;
	if (cast < 0)
	{
		out += write(fd, "-", 1);
		cast *= -1;
	}
	if (cast > ibase - 1)
		out += ft_putnbr_base_fd(cast / ibase, base, fd);
	return (out + write(fd, base + (cast % ibase), 1));
}
