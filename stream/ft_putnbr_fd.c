/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:36:00 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 20:54:04 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	out;

	out = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (n < 0)
	{
		out += ft_putchar_fd('-', fd);
		return (out + ft_putnbr_fd(-n, fd));
	}
	if (n > 9)
		out += ft_putnbr_fd(n / 10, fd);
	return (out + ft_putchar_fd('0' + (n % 10), fd));
}
