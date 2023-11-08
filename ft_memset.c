/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:26:35 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 16:35:29 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	if (n <= 0)
		return (dst);
	((unsigned char *)dst)[n - 1] = (unsigned char)c;
	return (ft_memset(dst, c, n - 1));
}
