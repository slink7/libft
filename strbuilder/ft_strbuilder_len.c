/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:43:56 by scambier          #+#    #+#             */
/*   Updated: 2024/03/09 19:01:24 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strbuilder_len(t_strbuilder *buffer)
{
	if (!buffer)
		return (0);
	return (buffer->index + ft_strbuilder_len(buffer->next));
}
