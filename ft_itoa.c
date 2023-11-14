/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:18:13 by scambier          #+#    #+#             */
/*   Updated: 2023/11/12 15:59:13 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	get_word_length(long n)
{
	int	out;

	out = 1;
	if (n < 0)
	{
		out++;
		n = -n;
	}
	while (n > 9)
	{
		out++;
		n /= 10;
	}
	return (out);
}

static void	ft_itoa_req(char *dst, long n, int i)
{
	if (n > 9)
		ft_itoa_req(dst, n / 10, i - 1);
	dst[i] = '0' + n % 10;
}

char	*ft_itoa(int n)
{
	char	*out;
	int		len;

	len = get_word_length(n);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	if (n < 0)
	{
		out[0] = '-';
		ft_itoa_req(out, -(long)n, len - 1);
	}
	else
		ft_itoa_req(out, n, len - 1);
	out[len] = '\0';
	return (out);
}
