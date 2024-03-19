/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymostows <ymostows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:31:40 by scambier          #+#    #+#             */
/*   Updated: 2024/03/19 16:10:30 by ymostows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BST_H
# define BST_H

typedef struct s_var
{
	char	*name;
	void	*value;
}	t_var;

typedef struct s_bst
{
	t_var			*var;
	struct s_bst	*left;
	struct s_bst	*right;
}	t_bst;

t_var		*ft_var_new(char *name);
void		ft_var_free(t_var **var);
t_bst		*ft_bst_new(t_var	*var);
void		ft_bst_free(t_bst **bst);
t_var		*ft_bst_fetch(t_bst **bst, char *name);
void		*ft_bst_getvar(t_bst *bst, char *name);
void		ft_bst_setvar(t_bst **bst, char *name, char *value);
void		ft_bst_print(t_bst *bst);
int			ft_bst_size(t_bst *bst);
char		**ft_bst_export(t_bst *bst);

#endif