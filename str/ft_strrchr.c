/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:59:31 by scambier          #+#    #+#             */
/*   Updated: 2023/11/15 21:11:17 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*temp;

	temp = 0;
	if (*str)
		temp = ft_strrchr(str + 1, c);
	if (temp)
		return (temp);
	if ((unsigned char)*str == (unsigned char)c)
		return ((char *)str);
	return (0);
}
