/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:26:04 by scambier          #+#    #+#             */
/*   Updated: 2023/11/16 01:17:38 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	void	*new_content;

	if (!lst)
		return (0);
	new_content = f(lst->content);
	if (!new_content)
		return (0);
	out = ft_lstnew(new_content);
	if (!out)
	{
		del(new_content);
		return (0);
	}
	if (!lst->next)
		return (out);
	out->next = ft_lstmap(lst->next, f, del);
	return (out);
}
