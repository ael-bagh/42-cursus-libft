/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 03:30:24 by ael-bagh          #+#    #+#             */
/*   Updated: 2019/10/23 03:30:37 by ael-bagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *add;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		if (!(add = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&add, del);
			return (NULL);
		}
		ft_lstadd_back(&add, add);
		lst = lst->next;
	}
	return (add);
}
