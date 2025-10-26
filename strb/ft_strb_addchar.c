/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strb_addchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:46:48 by scambier          #+#    #+#             */
/*   Updated: 2025/10/26 18:15:29 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strb_addchar(t_strb *buffer, char c)
{
	if (!buffer)
		return ;
	if (buffer->next)
	{
		ft_strb_addchar(buffer->next, c);
		return ;
	}
	if (buffer->index >= STRBUILDER_SIZE)
	{
		buffer->next = ft_strb_new();
		ft_strb_addchar(buffer->next, c);
		return ;
	}
	buffer->content[buffer->index++] = c;
}
