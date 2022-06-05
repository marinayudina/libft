/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:24:18 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:51:47 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*s1;
	unsigned int	i;

	i = 0;
	s1 = s;
	while (i < n)
	{
		if (s1[i] == (char)c)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
