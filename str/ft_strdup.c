/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:47:13 by scambier          #+#    #+#             */
/*   Updated: 2024/04/06 20:34:56 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*out;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	out = malloc(sizeof(char) * (s_len + 1));
	if (!out)
		return (0);
	ft_strlcpy(out, s, s_len + 1);
	out[s_len] = 0;
	return (out);
}
