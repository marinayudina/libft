/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:02:58 by bpono             #+#    #+#             */
/*   Updated: 2021/10/22 15:04:08 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res)
	{
		ft_memcpy(res, s1, ft_strlen(s1));
		ft_memcpy(res + ft_strlen(s1), s2, ft_strlen(s2) + 1);
		return (res);
	}
	return (NULL);
}
