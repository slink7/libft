/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_build.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:42:42 by scambier          #+#    #+#             */
/*   Updated: 2024/03/09 19:01:22 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strbuilder_build(t_strbuilder *buffer)
{
	t_strbuilder	*index;
	int				len;
	char			*out;
	int				out_k;

	len = ft_strbuilder_len(buffer);
	out = malloc(len + 1);
	index = buffer;
	out_k = 0;
	while (index)
	{
		ft_strlcpy(out + out_k, index->content, index->index + 1);
		out_k += index->index;
		index = index->next;
	}
	return (out);
}
