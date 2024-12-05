/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_setchars.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:19:43 by scambier          #+#    #+#             */
/*   Updated: 2024/12/05 16:32:17 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strbuilder_setchars(t_strbuilder *buffer, char c, int len)
{
	int	to_cpy;
	int	overflow;

	if (!c || len < 0)
		return (0);
	if (buffer->next)
		return (ft_strbuilder_setchars(ft_strbuilder_last(buffer), c, len));
	if (len > 0)
	{
		to_cpy = STRBUILDER_SIZE - buffer->index;
		overflow = len - to_cpy;
		if (overflow > 0)
		{
			ft_memset(buffer->content + buffer->index, c, to_cpy);
			buffer->index += to_cpy;
			if (!buffer->next)
				buffer->next = ft_strbuilder_new();
			return (ft_strbuilder_setchars(buffer->next, c, overflow));
		}
		ft_memset(buffer->content + buffer->index, c, len);
		buffer->index += len;
	}
	return (1);
}
