/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:06:45 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 18:32:19 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	s1_size;
	size_t	s2_size;
	size_t	target_size;
	size_t	k;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	target_size = s1_size * s2_size;
	out = malloc(sizeof(char) * target_size);
	if (!out)
		return (0);
	k = 0;
	while (k < target_size)
	{
		if (k < s1_size)
			out[k] = s1[k];
		else
			out[k] = s2[k - s1_size];
		k++;
	}
	return (out);
}
