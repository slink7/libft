/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_addchar.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:46:48 by scambier          #+#    #+#             */
/*   Updated: 2024/03/09 19:01:11 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strbuilder_addchar(t_strbuilder *buffer, char c)
{
	if (!buffer)
		return ;
	if (buffer->next)
	{
		ft_strbuilder_addchar(buffer->next, c);
		return ;
	}
	if (buffer->index >= STRBUILDER_SIZE)
	{
		buffer->next = ft_strbuilder_new();
		ft_strbuilder_addchar(buffer->next, c);
		return ;
	}
	buffer->content[buffer->index++] = c;
}
