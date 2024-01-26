/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putters0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:31:55 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 20:55:16 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "libft.h"

int	ft_putchar_fd_vaarg(va_list p, int fd)
{
	return (ft_putchar_fd((char)va_arg(p, int), fd));
}

int	ft_putstr_fd_vaarg(va_list p, int fd)
{
	return (ft_putstr_fd(va_arg(p, char *), fd));
}

int	ft_putnbr_fd_vaarg(va_list p, int fd)
{
	return (ft_putnbr_base_fd(va_arg(p, int), "0123456789", fd));
}

int	ft_puthex_fd_vaarg(va_list p, int fd)
{
	return (ft_putnbr_base_fd(va_arg(p, int), "0123456789ABCDEF", fd));
}
