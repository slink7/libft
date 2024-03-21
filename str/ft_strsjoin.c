/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:50:24 by scambier          #+#    #+#             */
/*   Updated: 2024/03/21 07:44:14 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_arrlenlen(char	**strs)
{
	int	out;
	int	k;

	out = 0;
	k = -1;
	while (strs[++k])
		out += ft_strlen(strs[k]);
	return (out);
}

char	*ft_strsjoin(char **strs, char *sep)
{
	int		len;
	int		k;
	char	*out;
	int		l;

	if (!strs || !*strs || !sep)
		return (0);
	len = str_arrlenlen(strs);
	len += ft_strlen(sep) * (ft_strarrlen(strs) - 1);
	out = ft_calloc(len + 1, sizeof(char));
	if (!out)
		return (0);
	k = -1;
	l = 0;
	while (strs[++k + 1])
	{
		ft_strlcpy(out + l, strs[k], -1);
		l += ft_strlen(strs[k]);
		ft_strlcpy(out + l, sep, -1);
		l += ft_strlen(sep);
	}
	ft_strlcpy(out + l, strs[k], -1);
	return (out);
}
