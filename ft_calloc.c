/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:35:41 by scambier          #+#    #+#             */
/*   Updated: 2023/11/14 15:50:21 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	target_size;
	char	*out;

	target_size = nmemb * size;
	if (nmemb != 0 && size != 0 && (target_size < nmemb || target_size < size))
		return (0);
	out = malloc(target_size);
	if (!out)
		return (0);
	ft_bzero(out, target_size);
	return (out);
}
