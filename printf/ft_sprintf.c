/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:24:33 by scambier          #+#    #+#             */
/*   Updated: 2024/04/06 16:08:26 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

static char	*handle_format(char *f, va_list ap)
{
	if (*f == 's')
		return (ft_strdup(va_arg(ap, char *)));
	else if (*f == 'd')
		return (ft_itoa(va_arg(ap, int)));
	return (0);
}

char	*ft_vsprintf(char *format, va_list ap)
{
	t_strbuilder	*builder;
	char			*index;
	char			*out;

	builder = ft_strbuilder_new();
	index = ft_strchr(format, '%');
	while (index)
	{
		ft_strbuilder_addstr(builder, format, index - format);
		out = handle_format(index + 1, ap);
		ft_strbuilder_addstr(builder, out, ft_strlen(out));
		free(out);
		format = index + 2;
		index = ft_strchr(format, '%');
	}
	ft_strbuilder_addstr(builder, format, ft_strlen(format));
	out = ft_strbuilder_build(builder);
	ft_strbuilder_free(&builder);
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