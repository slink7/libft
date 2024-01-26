/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putters.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:40:33 by scambier          #+#    #+#             */
/*   Updated: 2024/01/26 20:55:11 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTTERS_H
# define PUTTERS_H

# include <stdarg.h>

int	ft_putchar_fd_vaarg(va_list p, int fd);
int	ft_putstr_fd_vaarg(va_list p, int fd);
int	ft_putnbr_fd_vaarg(va_list p, int fd);
int	ft_puthex_fd_vaarg(va_list p, int fd);

#endif