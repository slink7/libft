/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:59:38 by scambier          #+#    #+#             */
/*   Updated: 2023/11/12 16:30:47 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		out_len;
	int		k;

	out_len = ft_strlen(s);
	out = malloc(sizeof(char) * (out_len + 1));
	if (!out)
		return (0);
	k = -1;
	while (s[++k])
		out[k] = f(k, s[k]);
	out[out_len] = '\0';
	return (out);
}
