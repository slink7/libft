/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_addstr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:47:54 by scambier          #+#    #+#             */
/*   Updated: 2024/03/09 20:33:53 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strbuilder_addstr(t_strbuilder *buffer, char *str)
{
	if (!str)
		return ;
	while (*str)
		ft_strbuilder_addchar(buffer, *str++);
}
