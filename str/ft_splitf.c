/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:02:54 by scambier          #+#    #+#             */
/*   Updated: 2024/03/11 17:09:24 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *str, int(*f)(int))
{
	int	out;

	out = 0;
	while (*str)
	{
		if (!f(*str) && (f(str[1]) || !str[1]))
			out++;
		str++;
	}
	return (out);
}

char	**ft_splitf(char *str, int(*f)(int))
{
	int		words;
	char	**out;
	int		k;
	int		temp;

	words = word_count(str, f);
	out = ft_calloc(words + 1, sizeof(char *));
	if (!out)
		return (0);
	k = -1;
	while (++k < words)
	{
		str = ft_strchrf(str, f, 1);
		temp = ft_strchrf(str, f, 0) - str;
		out[k] = ft_substr(str, 0, temp);
		str += temp;
	}
	return (out);
}