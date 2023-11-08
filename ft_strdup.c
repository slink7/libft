/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:47:13 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 17:52:04 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*strdup(const char *s)
{
	char	*out;
	size_t	out_size;

	out_size = ft_strlen(s);
	out = malloc(sizeof(char) * out_size);
	if (!out)
		return (0);
	ft_strlcpy(out, s, out_size);
	return (out);
}
