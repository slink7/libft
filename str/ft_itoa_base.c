/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 01:08:55 by scambier          #+#    #+#             */
/*   Updated: 2024/04/07 02:34:45 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_len(unsigned int k, unsigned int base_len)
{
	unsigned int	out;

	out = 1;
	while (k >= base_len)
	{
		out++;
		k /= base_len;
	}
	return (out);
}

static void	rec(char **dst, unsigned int k, char *base, unsigned int base_len)
{
	if (k > (base_len - 1))
		rec(dst, k / base_len, base, base_len);
	*(*dst)++ = base[k % base_len];
}

char	*ft_itoa_base(unsigned int k, char *base)
{
	unsigned int	len;
	char			*out;
	char			*cpy;

	len = get_len(k, ft_strlen(base));
	out = ft_calloc(len + 1, sizeof(char));
	if (!out)
		return (0);
	cpy = out;
	rec(&cpy, k, base, ft_strlen(base));
	return (out);
}
