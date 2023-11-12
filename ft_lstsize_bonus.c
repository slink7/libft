/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:50:57 by scambier          #+#    #+#             */
/*   Updated: 2023/11/12 17:19:48 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lstsize_rec(t_list *lst, int out)
{
	if (lst->next)
		return (ft_lstsize_rec(lst, out + 1));
	return (out);
}

int	ft_lstsize(t_list *lst)
{
	return (ft_lstsize_rec(lst, 0));
}
