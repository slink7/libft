/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:24:33 by scambier          #+#    #+#             */
/*   Updated: 2024/04/06 03:18:28 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

char	*handle_format(char *f, va_list *p)
{
	if (*f == 's')
		return (ft_strdup(va_arg(*p, char *)));
	else if (*f == 'd')
		return (ft_itoa(va_arg(*p, int)));
	return (0);
}

char	*ft_sprintf(char *format, ...)
{
	t_strbuilder	*builder;
	char			*index;
	char			*out;
	va_list			p;

	va_start(p, format);
	builder = ft_strbuilder_new();
	index = ft_strchr(format, '%');
	while (index)
	{
		ft_strbuilder_addstr(builder, format, index - format);
		out = handle_format(index + 1, &p);
		ft_strbuilder_addstr(builder, out, ft_strlen(out));
		free(out);
		format = index + 2;
		index = ft_strchr(format, '%');
	}
	ft_strbuilder_addstr(builder, format, ft_strlen(format));
	out = ft_strbuilder_build(builder);
	ft_strbuilder_free(&builder);
	va_end(p);
	return (out);
}
