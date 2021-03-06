/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:26:12 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:53:51 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (((char *)s)[i] != (char)c)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (&((char *)s)[i]);
}
