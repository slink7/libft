/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:42:04 by scambier          #+#    #+#             */
/*   Updated: 2024/05/28 17:40:45 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_H
# define STREAM_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbr_base_fd(long nbr, char *base, int fd);
int		ft_get_file(char **dst, char *path, unsigned int buffer_size);
char	*get_next_line(int fd);
void	ft_bindump(char *ptr, int len, int bpl);
void	ft_hexdump(char *ptr, int len, int bpl);

#endif