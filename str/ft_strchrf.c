/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:59:14 by scambier          #+#    #+#             */
/*   Updated: 2024/03/12 16:22:48 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchrf(char *str, int (*f)(int), int inverted)
{
	int	k;

	k = -1;
	while (str[++k])
		if (f(str[k]) ^ inverted)
			return (str + k);
	return (0);
}
