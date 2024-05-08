/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:17:54 by scambier          #+#    #+#             */
/*   Updated: 2024/05/08 19:19:39 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#include "libft.h"

char	**ft_get_file(char *path)
{
	t_list	*lines;
	char	*line;
	int		fd;
	char	**out;

	fd = open(path, O_RDONLY);
	if (fd < 3)
		return (0);
	lines = 0;
	line = get_next_line(fd);
	while (line)
	{
		line[ft_strlen(line) - 1] = 0;
		ft_lstadd_back(&lines, ft_lstnew(line));
		line = get_next_line(fd);
	}
	close(fd);
	out = (char **)ft_lstexport(lines);
	ft_lstclear(&lines, 0);
	return (out);
}
