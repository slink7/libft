/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:31:57 by scambier          #+#    #+#             */
/*   Updated: 2024/12/05 16:32:07 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_strbuilder	*ft_strbuilder_last(t_strbuilder *buffer)
{
	if (!buffer)
		return (0);
	if (buffer->next)
		return (ft_strbuilder_last(buffer->next));
	return (buffer);
}