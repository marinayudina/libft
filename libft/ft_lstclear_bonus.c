/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:35:06 by bpono             #+#    #+#             */
/*   Updated: 2021/10/23 18:46:30 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tab1;
	t_list	*tab2;

	tab1 = *lst;
	while (tab1)
	{
		tab2 = tab1;
		tab1 = tab1->next;
		del(tab2->content);
		free(tab2);
	}
	*lst = NULL;
}
