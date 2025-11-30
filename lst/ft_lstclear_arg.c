/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_arg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 23:51:28 by scambier          #+#    #+#             */
/*   Updated: 2025/11/30 00:00:58 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "lst.h"

void	ft_lstclear_arg(t_list **lst, void (*del)(void*, void*), void *args)
{
	if (!lst || !*lst)
		return ;
	ft_lstclear_arg(&(*lst)->next, del, args);
	del(lst->content, args);
	ft_free((void **)lst, 0);
}
