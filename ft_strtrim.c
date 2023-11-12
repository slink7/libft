/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:16:49 by scambier          #+#    #+#             */
/*   Updated: 2023/11/12 20:39:19 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	elem_of(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static int	count_elem(char const *s1, char const *set, int start, int dir)
{
	int	k;

	k = 0;
	while (elem_of(s1[start + k * dir], set))
		k++;
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		k;
	int		trim_front;
	int		trim_back;
	char	*out;

	s1_len = ft_strlen(s1);
	k = 0;
	trim_front = count_elem(s1, set, 0, 1);
	trim_back = s1_len - count_elem(s1, set, s1_len - 1, -1);
	out = malloc(trim_back);
	while (trim_front < trim_back)
		out[k++] = s1[trim_front++];
	return (out);
}
