/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:17:54 by scambier          #+#    #+#             */
/*   Updated: 2024/05/10 19:07:23 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include "libft.h"

int	ft_get_file(char **dst, char *path, unsigned int buffer_size)
{
	int		fd;
	char	*buffer;
	int		len;
	int		temp;

	fd = open(path, O_RDONLY);
	if (fd < 3)
		return (0);
	*dst = ft_calloc(1, sizeof(char));
	buffer = ft_calloc(buffer_size + 1, sizeof(char));
	temp = read(fd, buffer, buffer_size);
	len = 0;
	while (temp)
	{
		ft_memcat((void **)dst, len, buffer, temp);
		len += temp;
		temp = read(fd, buffer, buffer_size);
	}
	ft_memcat((void **)dst, len, buffer, temp);
	free(buffer);
	return (len);
}
