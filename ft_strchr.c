/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:49:25 by scambier          #+#    #+#             */
/*   Updated: 2023/11/08 16:52:49 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	if (*str == (unsigned char)c)
		return ((char *)str);
	if (!*str)
		return (0);
	return (ft_strchr(str + 1, c));
}
