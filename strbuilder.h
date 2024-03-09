/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbuilder.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:49 by scambier          #+#    #+#             */
/*   Updated: 2024/03/10 00:29:14 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRBUILDER_H
# define STRBUILDER_H

# define STRBUILDER_SIZE 96

typedef struct s_strbuilder	t_strbuilder;

typedef struct s_strbuilder {
	t_strbuilder	*next;
	char			*content;
	int				index;
}	t_strbuilder;

t_strbuilder	*ft_strbuilder_new(void);
int				ft_strbuilder_free(t_strbuilder **buffer);
void			ft_strbuilder_addchar(t_strbuilder *buffer, char c);
void			ft_strbuilder_addstr(t_strbuilder *buffer, char *str, int len);
int				ft_strbuilder_len(t_strbuilder *builder);
char			*ft_strbuilder_build(t_strbuilder *buffer);

#endif