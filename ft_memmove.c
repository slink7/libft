/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:44:21 by scambier          #+#    #+#             */
/*   Updated: 2023/11/11 17:48:43 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t    i;

	if (!dest && !src)
    	return (NULL);
	i = -1;
    if (dest > src)
        while (n-- >= 1)
            ((char *)dest)[n] = ((char *)src)[n];
    else
		while (++i < n)
            ((char *)dest)[i] = ((char *)src)[i];
    return (dest);
}