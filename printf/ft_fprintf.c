/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:48:32 by scambier          #+#    #+#             */
/*   Updated: 2024/04/07 00:59:57 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

int	ft_vfprintf(int fd, char *format, va_list ap)
{
	char	*temp;
	int		out;

	temp = ft_vsprintf(format, ap);
	if (!temp)
		return (-1);
	out = write(fd, temp, ft_strlen(temp));
	free(temp);
	return (out);
}

int	ft_fprintf(int fd, char *format, ...)
{
	va_list	ap;
	int		out;

	va_start(ap, format);
	out = ft_vfprintf(fd, format, ap);
	va_end(ap);
	return (out);
}
