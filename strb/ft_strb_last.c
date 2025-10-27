/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strb_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:31:57 by scambier          #+#    #+#             */
/*   Updated: 2024/12/05 16:32:07 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_strb	*ft_strb_last(t_strb *buffer)
{
	if (!buffer)
		return (0);
	if (buffer->next)
		return (ft_strb_last(buffer->next));
	return (buffer);
}
