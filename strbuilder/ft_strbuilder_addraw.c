/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_addraw.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:51 by scambier          #+#    #+#             */
/*   Updated: 2024/12/04 17:37:51 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strbuilder_addraw(t_strbuilder *buffer, char *str, int len)
{
	ft_memcpy(buffer->content + buffer->index, str, len);
	buffer->index += len;
}
