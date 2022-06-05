/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:13:06 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:54:57 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len_s;
	char			*buffer;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	buffer = (char *) malloc(len_s + 1);
	if (buffer == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
