/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strb.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:49 by scambier          #+#    #+#             */
/*   Updated: 2025/11/24 11:12:26 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRB_H
# define STRB_H

# define STRBUILDER_SIZE 128

typedef struct s_strb	t_strb;

typedef struct s_strb
{
	t_strb	*next;
	char	content[STRBUILDER_SIZE];
	int		index;
}	t_strb;

t_strb			*ft_strb_new(void);
int				ft_strb_free(t_strb **buffer);
int				ft_strb_addraw(t_strb *buffer, char *str, int len);
void			ft_strb_addchar(t_strb *buffer, char c);
int				ft_strb_addstr(t_strb *buffer, char *str, int len);
int				ft_strb_setchars(t_strb *buffer, char c, int len);
t_strb			*ft_strb_last(t_strb *buffer);
int				ft_strb_len(t_strb *builder);
char			*ft_strb_build(t_strb *buffer);

#endif
