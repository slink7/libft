/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:40:18 by scambier          #+#    #+#             */
/*   Updated: 2024/03/09 18:42:29 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_strbuilder	*ft_strbuilder_new(void)
{
	t_strbuilder	*out;

	out = malloc(sizeof(t_strbuilder));
	out->content = ft_calloc(STRBUILDER_SIZE + 1, 1);
	out->index = 0;
	out->next = 0;
	return (out);
}
