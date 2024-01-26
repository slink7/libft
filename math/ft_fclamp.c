/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fclamp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:51:12 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 14:58:49 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//(min >= x) ? min : (max <= x) ? max : x
float	ft_fclamp(float min, float x, float max)
{
	return (ft_fmax(min, ft_fmin(x, max)));
}