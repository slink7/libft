/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstexport.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:03:56 by scambier          #+#    #+#             */
/*   Updated: 2024/05/08 19:18:35 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lst_cpy_toarr(t_list *lst, void **arr)
{
	if (!lst)
		return ;
	arr[0] = lst->content;
	lst_cpy_toarr(lst->next, arr + 1);
}

void	**ft_lstexport(t_list *lst)
{
	int		size;
	void	**out;

	if (!lst)
		return (0);
	size = ft_lstsize(lst);
	out = ft_calloc(size + 1, sizeof(void *));
	if (!out)
		return (0);
	lst_cpy_toarr(lst, out);
	return (out);
}
