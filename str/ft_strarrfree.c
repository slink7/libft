/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:43:58 by scambier          #+#    #+#             */
/*   Updated: 2024/03/01 20:26:09 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strarrfree(char **strarr)
{
	int	k;

	k = -1;
	while (strarr[++k])
		free(strarr[k]);
	free(strarr);
	return (1);
}
