/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:52:49 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 15:06:41 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	count_words(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**do_free(char	**str, int i)
{
	i--;
	i--;
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**do_split(char **str, const char *s, char c)
{
	int			i;
	int			j;
	int			len;
	const char	*start;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		len = 0;
		while (s[j] != '\0' && s[j] == c)
			j++;
		start = &s[j];
		while (s[j] != '\0' && s[j] != c)
		{
			len++;
			j++;
		}
		if (s[j - 1] != c)
			str[i++] = ft_substr(start, 0, len);
		if (str[i] - 1 == NULL)
			return (do_free(str, i));
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		count;

	if (!str)
		return (NULL);
	count = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	return (do_split(res, str, c));
}
