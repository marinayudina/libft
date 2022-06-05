/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:26:18 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:53:57 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len_s1;
	char	*buffer;

	i = 0;
	len_s1 = ft_strlen(s1);
	buffer = (char *) malloc(len_s1 + 1);
	if (buffer == NULL)
		return (NULL);
	while (i < len_s1)
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
