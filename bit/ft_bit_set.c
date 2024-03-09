/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 03:19:58 by scambier          #+#    #+#             */
/*   Updated: 2024/03/06 03:21:37 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bit_set(int *src, int b, int v)
{
	*src = (*src & ~(1 << b)) | ((v % 2) << b);
}