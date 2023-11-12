/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:59:39 by scambier          #+#    #+#             */
/*   Updated: 2023/11/11 18:53:40 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	return ((a <= b) * a + (a > b) * b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	target_len;
	char	*out;
	size_t	k;

	target_len = min(len, ft_strlen(s) - start);
	out = malloc(sizeof(char) * target_len);
	if (!out)
		return (0);
	k = 0;
	while (k < len)
		out[k] = s[start + k];
	return (out);
}
