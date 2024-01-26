/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:59:36 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 20:55:14 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include "../libft.h"
#include "putters.h"

typedef struct s_format {
	char	c;
	int		(*f)(va_list p, int fd);
}	t_format;

static int	associate(char c, va_list p, int fd)
{
	static t_format	formats[] = {
		(t_format){'c', ft_putchar_fd_vaarg},
		(t_format){'s', ft_putstr_fd_vaarg},
		(t_format){'d', ft_putnbr_fd_vaarg},
		(t_format){'X', ft_puthex_fd_vaarg},
	};
	int				k;

	k = 9;
	while (--k >= 0)
		if (formats[k].c == c)
			return (formats[k].f(p, fd));
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

int	ft_printf_fd(int fd, const char *format, ...)
{
	int		out;
	va_list	p;

	va_start(p, format);
	out = 0;
	while (*format)
	{
		if (*format != '%')
		{
			out += write(1, format++, 1);
			continue ;
		}
		format++;
		out += associate(*format++, p, fd);
	}
	va_end(p);
	return (out);
}
