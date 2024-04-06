/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:59:36 by scambier          #+#    #+#             */
/*   Updated: 2024/04/07 00:58:56 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include "libft.h"

int	ft_vprintf(char *format, va_list ap)
{
	return (ft_vfprintf(STDOUT_FILENO, format, ap));
}

int	ft_printf(char *format, ...)
{
	va_list	ap;
	int		out;

	va_start(ap, format);
	out = ft_vprintf(format, ap);
	va_end(ap);
	return (out);
}
