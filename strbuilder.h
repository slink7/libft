/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbuilder.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:49 by scambier          #+#    #+#             */
/*   Updated: 2024/12/05 17:06:52 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRBUILDER_H
# define STRBUILDER_H

# define STRBUILDER_SIZE 128

typedef struct s_strbuilder	t_strbuilder;

typedef struct s_strbuilder {
	t_strbuilder	*next;
	char			content[STRBUILDER_SIZE];
	int				index;
}	t_strbuilder;

t_strbuilder	*ft_strbuilder_new(void);
int				ft_strbuilder_free(t_strbuilder **buffer);
int				ft_strbuilder_addraw(t_strbuilder *buffer, char *str, int len);
void			ft_strbuilder_addchar(t_strbuilder *buffer, char c);
int				ft_strbuilder_addstr(t_strbuilder *buffer, char *str, int len);
int				ft_strbuilder_setchars(t_strbuilder *buffer, char c, int len);
t_strbuilder	*ft_strbuilder_last(t_strbuilder *buffer);
int				ft_strbuilder_len(t_strbuilder *builder);
char			*ft_strbuilder_build(t_strbuilder *buffer);

#endif