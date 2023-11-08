/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:59:31 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 16:53:11 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*temp;

	if (!*str)
		return (0);
	temp = ft_strrchr(str + 1, c);
	if (temp)
		return (temp);
	if (*str == c)
		return ((char *)str);
	return (0);
}
