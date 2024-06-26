/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:57:03 by scambier          #+#    #+#             */
/*   Updated: 2024/04/06 14:31:39 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

char	*ft_vsprintf(char *format, va_list ap);
int		ft_vfprintf(int fd, char *format, va_list ap);
int		ft_vprintf(char *format, va_list ap);

char	*ft_sprintf(char *format, ...);
int		ft_fprintf(int fd, char *format, ...);
int		ft_printf(char *format, ...);

#endif