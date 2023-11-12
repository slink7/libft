/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:28:30 by scambier          #+#    #+#             */
/*   Updated: 2023/11/11 16:35:07 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "libft.h"

static int	get_count_word(char const *str, char c)
{
	int	k;

	k = 0;
	while (*str)
	{
		if (str[0] != c && (str[1] == c || !str[1]))
			k++;
		str++;
	}
	return (k);
}

static int	get_word_len(char const *str, char c)
{
	int	k;

	k = 0;
	while (str[k] && str[k] != c)
		k++;
	return (k);
}

static int	min(int a, int b)
{
	return ((a < b) * a + (b <= a) * b);
}

static char	*ft_strndup(const char *str, size_t n)
{
	char	*out;
	int		size;

	size = min(ft_strlen(str), n);
	out = malloc(sizeof(char) * size);
	if (!out)
		return (0);
	while (size >= 0)
	{
		out[size] = str[size];
		size--;
	}
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		out_len;
	int		k;
	int		word_len;

	out_len = get_count_word(s, c);
	out = malloc(sizeof(char *) * (out_len + 1));
	k = 0;
	while (k < out_len)
	{
		while (*s == c)
			s++;
		word_len = get_word_len(s, c);
		out[k] = ft_strndup(s, word_len - 1);
		s += word_len;
		k++;
	}
	out[out_len] = 0;
	return (out);
}
