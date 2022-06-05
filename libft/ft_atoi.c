/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:17:13 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:49:12 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	do_d(int cnt, const char *str, int k )
{
	if (cnt > 19 || (cnt == 19
			&& ft_strncmp(str + k, "9223372036854775807", 19) >= 0))
		return (1);
	else
		return (2);
}

int	check(unsigned int i, const char *str, int d)
{
	int	k;
	int	cnt;

	while (str[i] == '0')
		i++;
	k = i;
	cnt = 0;
	while (ft_isdigit(str[i]))
	{
		cnt++;
		i++;
	}
	if (d == 1)
	{
		return (do_d(cnt, str, k));
	}
	else
	{
		if (cnt > 19 || (cnt == 19
				&&ft_strncmp(str + k, "9223372036854775808", 19) >= 0))
			return (11);
		else
			return (22);
	}
	return (6);
}

int	max_min_ret(int c)
{
	if (c == 1)
		return ((int)(9223372036854775807L));
	if (c == 11)
		return ((int)(-9223372036854775807L - 1L));
	return (10);
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				d;
	long			res;

	i = 0;
	d = 1;
	res = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			d = d * (-1);
		i++;
	}
	if (check(i, str, d) == 1 || check(i, str, d) == 11)
		return (max_min_ret(check(i, str, d)));
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int)res * d);
}
