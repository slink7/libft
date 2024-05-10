/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:17:54 by scambier          #+#    #+#             */
/*   Updated: 2024/05/10 15:58:13 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include "libft.h"

char	*ft_get_file(char *path, unsigned int buffer_size)
{
	int		fd;
	char	*out;
	char	*buffer;

	fd = open(path, O_RDONLY);
	if (fd < 3)
		return (0);
	out = ft_calloc(1, sizeof(char));
	buffer = ft_calloc(buffer_size + 1, sizeof(char));
	while (read(fd, buffer, buffer_size))
		ft_strcat(&out, buffer);
	free(buffer);
	return (out);
}
