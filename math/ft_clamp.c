/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:58:03 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 20:54:44 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//(min >= x) ? min : (max <= x) ? max : x
int	ft_clamp(int min, int x, int max)
{
	return (ft_max(min, ft_min(x, max)));
}
