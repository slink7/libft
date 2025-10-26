/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:24:33 by scambier          #+#    #+#             */
/*   Updated: 2024/05/08 19:41:57 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

static char	*char_to_str(char c)
{
	char	*out;

	out = ft_calloc(2, sizeof(char));
	out[0] = c;
	return (out);
}

static char	*handle_format(char *f, va_list ap)
{
	if (*f == 's')
		return (ft_strdup(va_arg(ap, char *)));
	else if (*f == 'd')
		return (ft_itoa(va_arg(ap, int)));
	else if (*f == 'x')
		return (ft_itoa_base(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (*f == 'X')
		return (ft_itoa_base(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (*f == 'u')
		return (ft_itoa_base(va_arg(ap, unsigned int), "0123456789"));
	else if (*f == 'c')
		return (char_to_str(va_arg(ap, int)));
	return (ft_substr(f - 1, 0, 2));
}

char	*ft_vsprintf(char *format, va_list ap)
{
	t_strb	*builder;
	char			*index;
	char			*out;

	if (!format)
		return (0);
	builder = ft_strb_new();
	index = ft_strchr(format, '%');
	while (index)
	{
		ft_strb_addstr(builder, format, index - format);
		out = handle_format(index + 1, ap);
		if (out && (ft_strb_addstr(builder, out, ft_strlen(out)) || 1))
			free(out);
		else
			ft_strb_addstr(builder, "(null)", 6);
		format = index + 2;
		index = ft_strchr(format, '%');
	}
	ft_strb_addstr(builder, format, ft_strlen(format));
	out = ft_strb_build(builder);
	ft_strb_free(&builder);
	return (out);
}

char	*ft_sprintf(char *format, ...)
{
	va_list	ap;
	char	*out;

	va_start(ap, format);
	out = ft_vsprintf(format, ap);
	va_end(ap);
	return (out);
}
