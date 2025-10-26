/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strb_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:43:56 by scambier          #+#    #+#             */
/*   Updated: 2024/12/02 16:21:02 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strb_len(t_strb *buffer)
{
	if (!buffer)
		return (0);
	return (buffer->index + ft_strb_len(buffer->next));
}
