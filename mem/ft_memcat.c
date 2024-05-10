/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:50:31 by scambier          #+#    #+#             */
/*   Updated: 2024/05/10 18:54:36 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_memcat(void **dst, int dst_len, void *src, int src_len)
{
	void	*temp;

	temp = ft_calloc(dst_len + src_len, sizeof(unsigned char));
	ft_memcpy(temp, dst, dst_len);
	ft_memcpy(temp + dst_len, src, src_len);
	free(*dst);
	*dst = temp;
}