/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:40:56 by scambier          #+#    #+#             */
/*   Updated: 2024/01/24 18:54:30 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strarrlen(char **strarr)
{
	int	k;

	k = 0;
	while (*strarr++)
		k++;
	return (k);
}
