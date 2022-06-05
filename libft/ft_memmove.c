/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:25:58 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:52:23 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = dst;
	str2 = src;
	if (str1 == NULL && str2 == NULL)
		return (str1);
	if (src > dst)
	{
		return (ft_memcpy(dst, src, len));
	}
	if (src == dst)
		return (str1);
	else
	{
		while (i < len)
		{
			str1[len - 1] = str2[len - 1];
			len--;
		}
	}
	return ((void *)str1);
}
