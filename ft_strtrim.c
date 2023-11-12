/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:16:49 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 18:32:47 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	is_elem_of(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static int	count_elem(char const *s1, char const *set)
{
	int	k;

	k = 0;
	while (*s1)
		k += is_elem_of(*s1++, set);
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	int		k;

	out = malloc(sizeof(char) * (ft_strlen(s1) - count_elem(s1, set)));
	if (!out)
		return (0);
	k = 0;
	while (*s1)
	{
		if (is_elem_of(*s1, set))
		{
			s1++;
			continue ;
		}
		out[k++] = *s1++;
	}
	return (out);
}
