/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:55:08 by scambier          #+#    #+#             */
/*   Updated: 2024/03/21 07:34:34 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <stddef.h>

char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strsjoin(char **strs, char *sep);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *nptr);
int		ft_atoi_strict(int *out, char *in);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_strnset(char *str, char c, int n);
int		ft_strarrfree(char **strarr);
int		ft_strarrlen(char **strarr);
char	*ft_strchrf(char *str, int (*f)(int), int inverted);
char	**ft_splitf(char *str, int (*f)(int));
int		ft_strchri(char *str, char c);
int		ft_atoi_base(char *str, char *base);
char	*ft_strjoin_free(char *backup, char *buffer);

#endif