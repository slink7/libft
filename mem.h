/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:49:41 by scambier          #+#    #+#             */
/*   Updated: 2024/03/04 17:57:16 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include <stddef.h>

void	*ft_memset(void *dst, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	ft_bzero(void *dst, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *p1, const void *p2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_pmem(void *ptr, int len);

#endif