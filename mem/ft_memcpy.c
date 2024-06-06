/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:33:36 by scambier          #+#    #+#             */
/*   Updated: 2024/06/06 15:23:07 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (n <= 0)
		return (dst);
	if (!dst && !src)
		return (0);
	while (n--)
		*((char *)dst + n - 1) = *((char *)src + n - 1);
	return (dst);
}
