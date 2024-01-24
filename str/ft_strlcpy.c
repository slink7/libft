/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:50:30 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 18:31:46 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	int		jsp;

	if ((int) size < 0)
		size = ft_strlen(src) + 1;
	len = 0u;
	jsp = ft_strlen(src);
	if ((int) size == 0)
		return (jsp);
	while (*(src + len) != '\0' && len < size - 1)
	{
		*(dst + len) = *(src + len);
		len++;
	}
	*(dst + len) = '\0';
	return (jsp);
}
