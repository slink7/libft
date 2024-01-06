/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:40:44 by scambier          #+#    #+#             */
/*   Updated: 2024/01/06 19:52:44 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

void	ft_strnset(char *str, char c, int n);
int		has_char(char *str, char c);

void	ft_strmcat(char **dst, char *src);
char	*ft_stralloc(int len, char c);
void	ft_moise(char **out, char **in);
void	ft_read(int fd, char **out);
char	*get_next_line(int fd);

#endif