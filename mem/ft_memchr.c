/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:06:18 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 16:56:00 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	if (!n)
		return (0);
	if (*(unsigned char *)str == (unsigned char)c)
		return ((void *)str);
	return (ft_memchr(str + 1, c, n - 1));
}
