/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:55:02 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:51:55 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*s11;
	const char	*s22;

	s11 = s1;
	s22 = s2;
	i = 0;
	while (i < n)
	{
		if (s11[i] != s22[i])
		{
			return ((unsigned char)s11[i] - (unsigned char)s22[i]);
		}
		i++;
	}
	return (0);
}
