/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuilder_addstr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:47:54 by scambier          #+#    #+#             */
/*   Updated: 2024/03/10 00:36:30 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strbuilder_addstr(t_strbuilder *buffer, char *str, int len)
{
	if (!str || len < 0 || !*str)
		return ;
	if (len > 0)
		while (*str && len--)
			ft_strbuilder_addchar(buffer, *str++);
	else
		ft_strbuilder_addstr(buffer, str, ft_strlen(str));
}
