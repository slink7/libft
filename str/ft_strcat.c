/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymostows <ymostows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:54:43 by ymostows          #+#    #+#             */
/*   Updated: 2024/03/19 15:54:43 by ymostows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_strcat(char **dst, char *src)
{
	char	*temp;

	temp = ft_strjoin(*dst, src);
	free(*dst);
	*dst = temp;
}
