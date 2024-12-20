/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:42:04 by scambier          #+#    #+#             */
/*   Updated: 2024/12/02 16:00:34 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

int	ft_strbuilder_free(t_strbuilder **buffer)
{
	if (!buffer || !*buffer)
		return (0);
	ft_strbuilder_free(&(*buffer)->next);
	free(*buffer);
	*buffer = 0;
	return (1);
}
