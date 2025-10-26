/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strb_addraw.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:51 by scambier          #+#    #+#             */
/*   Updated: 2024/12/05 16:32:39 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strb_addraw(t_strb *buffer, char *str, int len)
{
	ft_memcpy(buffer->content + buffer->index, str, len);
	buffer->index += len;
	return (1);
}
