/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:36:17 by scambier          #+#    #+#             */
/*   Updated: 2023/11/16 00:25:16 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bk;
	size_t	lk;
	size_t	little_len;

	if ((!big || !little) && !len)
		return (0);
	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	bk = 0;
	while (big[bk] && (len - (size_t)bk >= little_len))
	{
		lk = 0;
		while (little[lk])
		{
			if (big[bk + lk] != little[lk])
				break ;
			lk++;
		}
		if (lk == little_len)
			return ((char *)big + bk);
		bk++;
	}
	return (0);
}
