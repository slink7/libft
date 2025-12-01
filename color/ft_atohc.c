/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 22:37:12 by scambier          #+#    #+#             */
/*   Updated: 2025/12/01 00:54:41 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "color.h"

static int	is_hexdigit(int c)
{
	return (!!ft_strchr("0123456789ABCDEFabcdef", c));
}

static int	get_hexdigit(int c)
{
	const char	*digits = "0123456789ABCDEF0000000000abcdef";
	char		*temp;

	temp = ft_strchr(digits, c);
	if (!temp)
		return (-1);
	return ((temp - digits) % 16);
}

static int	atoif(char *str, int (*format)(int c), int base)
{
	int	out;
	int	temp;
	int	k;

	out = 0;
	k = 0;
	temp = format(str[k]);
	while (str[k] && temp != -1)
	{
		out = out * base + temp;
		temp = format(str[++k]);
	}
	return (out);
}

static int	try_n_get_number(t_color *out, const char *prefix, char *nbr)
{
	int		prefix_len;
	char	*end;
	int		nbr_len;

	prefix_len = ft_strlen(prefix);
	if (ft_strncmp(nbr, prefix, prefix_len))
		return (0);
	end = ft_strchrf(nbr + prefix_len, is_hexdigit, 1);
	if (end)
		nbr_len = end - (nbr + prefix_len);
	else
		nbr_len = ft_strlen(nbr + prefix_len);
	if (nbr_len != 6 && nbr_len != 8)
		return (0);
	out->raw = atoif(nbr + prefix_len, get_hexdigit, 16);
	if (nbr_len == 6)
		out->raw <<= 8;
	return (1);
}

int	ft_atohc(t_color *out, char *str)
{
	const char		*prefixes[] = {
		"0x", "#", ""
	};
	unsigned int	k;

	out->raw = 0x0;
	k = -1u;
	while (++k < sizeof(prefixes) / sizeof(char *))
		if (try_n_get_number(out, prefixes[k], str))
			return (1);
	return (0);
}
