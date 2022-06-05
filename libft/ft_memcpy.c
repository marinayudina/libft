/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:25:47 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:52:05 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = dest;
	str2 = src;
	if (str1 == NULL && str2 == NULL)
		return (str1);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return ((void *)str1);
}
