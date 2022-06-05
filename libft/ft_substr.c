/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:50:31 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:55:47 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	k;

	if (!s)
		return (NULL);
	k = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		buffer = malloc(sizeof(char));
		buffer[0] = '\0';
		return (buffer);
	}
	if (len < k)
		buffer = (char *) malloc(len + 1);
	else
		buffer = (char *) malloc(k + 1);
	if (buffer == NULL)
		return (NULL);
	ft_strlcpy(buffer, s + start, len + 1);
	return (buffer);
}
