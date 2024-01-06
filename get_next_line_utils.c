/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:07:41 by scambier          #+#    #+#             */
/*   Updated: 2024/01/06 19:50:00 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "get_next_line.h"

int	has_char(char *str, char c)
{
	int	k;

	k = -1;
	while (str[++k])
		if (str[k] == c)
			return (k);
	return (-1);
}