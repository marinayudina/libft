/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:39:54 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:43:04 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	check_str1(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	i1;
	size_t	len;
	char	*buffer;
	size_t	len1;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	i1 = len - 1;
	while (check_str1(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (check_str1(s1[i1], set) == 1)
		i1--;
	len1 = i1 - i + 1;
	buffer = ft_substr((char *)s1, i, len1);
	if (!buffer)
		return (NULL);
	return (buffer);
}
