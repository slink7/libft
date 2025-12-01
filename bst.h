/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:31:40 by scambier          #+#    #+#             */
/*   Updated: 2025/11/28 04:04:15 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BST_H
# define BST_H

typedef struct s_bst
{
	char			*name;
	char			*value;
	struct s_bst	*left;
	struct s_bst	*right;
}	t_bst;

t_bst	*ft_bst_new(char *name, char *value);
void	ft_bst_free(t_bst **bst);
t_bst	*ft_bst_fetch(t_bst **bst, char *name);
char	*ft_bst_getval(t_bst *bst, char *name);
int		ft_bst_setval(t_bst **bst, char *name, char *value);
void	ft_bst_print(t_bst *bst);
int		ft_bst_size(t_bst *bst);
char	**ft_bst_export(t_bst *bst);
t_bst	*ft_bst_find_min(t_bst *bst);
int		ft_bst_remove(t_bst **bst, char *name);
t_bst	*ft_bst_find(t_bst *bst, char *name);
int		ft_bst_toarray(t_bst *bst, char ***var, char ***val);
int		ft_bst_depth(t_bst *bst);
void	ft_bst_balance(t_bst **bst);

#endif
