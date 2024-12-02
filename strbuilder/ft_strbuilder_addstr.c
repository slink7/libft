/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_addstr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:47:54 by scambier          #+#    #+#             */
/*   Updated: 2024/12/02 17:17:04 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strbuilder_addraw(t_strbuilder *buffer, char *str, int len)
{
	ft_memcpy(buffer->content + buffer->index, str, len);
	buffer->index += len;
	return (1);
}

static t_strbuilder	*ft_strbuilder_last(t_strbuilder *buffer)
{
	if (!buffer)
		return (0);
	if (buffer->next)
		return (ft_strbuilder_last(buffer->next));
	return (buffer);
}

int	ft_strbuilder_addstr(t_strbuilder *buffer, char *str, int len)
{
	int	to_cpy;
	int	overflow;

	if (!str || len < 0 || !*str)
		return (0);
	if (buffer->next)
		return (ft_strbuilder_addstr(ft_strbuilder_last(buffer), str, len));
	if (len > 0)
	{
		to_cpy = STRBUILDER_SIZE - buffer->index;
		overflow = len - to_cpy;
		if (overflow > 0) {
			ft_strbuilder_addraw(buffer, str, to_cpy);
			if (!buffer->next)
				buffer->next = ft_strbuilder_new();
			return (ft_strbuilder_addstr(buffer->next, str + to_cpy, overflow));
		}
		ft_strbuilder_addraw(buffer, str, len);
	}
	return (1);
}
