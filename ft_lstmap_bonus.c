/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:26:04 by scambier          #+#    #+#             */
/*   Updated: 2023/11/12 17:51:37 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;

	out = ft_lstnew(f(lst));
	if (!out)
		return (0);
	out->next = ft_lstmap(lst->next, f, del);
	if (!out->next)
	{
		del(out);
		free(out);
		return (0);
	}
	return (out);
}
