/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:36:26 by bpono             #+#    #+#             */
/*   Updated: 2021/10/23 21:57:52 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tab1;
	t_list	*tab2;

	if (!lst)
		return (NULL);
	tab1 = ft_lstnew(f(lst->content));
	if (!tab1)
		return (NULL);
	tab2 = tab1;
	lst = lst->next;
	while (lst)
	{
		tab1->next = ft_lstnew(f(lst->content));
		if (!tab1)
		{
			ft_lstclear(&tab2, del);
			return (NULL);
		}
		lst = lst->next;
		tab1 = tab1->next;
	}
	return (tab2);
}
