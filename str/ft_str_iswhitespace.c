/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_iswhitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:08:11 by scambier          #+#    #+#             */
/*   Updated: 2025/11/24 16:09:22 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "char.h"

int	ft_str_iswhitespace(char *str)
{
	return (!ft_strchrf(str, ft_iswhitespace, 1));
}
