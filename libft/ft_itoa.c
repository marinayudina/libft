/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:06:28 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:51:24 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	raise_pow1(int x, int power)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	while (i <= power)
	{
		res = res * x;
		i++;
	}
	return (res);
}

int	ft_count1(int n1)
{
	int	k;

	k = 0;
	while (n1 > 0)
	{
		n1 = n1 / 10;
		k++;
	}
	k = k - 1;
	return (k);
}

char	*do_n( char *buffer, int n1)
{
	int				c;
	unsigned int	i;
	int				k;

	i = 0;
	k = ft_count1(n1);
	buffer = (char *) malloc(sizeof(char) * (k + 2));
	if (buffer == NULL)
		return (NULL);
	buffer [k + 1] = '\0';
	while (k != -1)
	{
		c = n1 / raise_pow1(10, k);
		c = c + '0';
		buffer[i] = c;
		n1 = n1 % raise_pow1(10, k);
		k--;
		i++;
	}
	return (buffer);
}

char	*do_n1(char *buffer, int n)
{
	int				c;
	int				n1;
	unsigned int	i;
	int				k;

	i = 1;
	n = n * (-1);
	n1 = n;
	k = ft_count1(n1);
	buffer = (char *) malloc(k + 3);
	if (buffer == NULL)
		return (NULL);
	buffer[0] = '-';
	buffer [k + 2] = '\0';
	while (k != -1)
	{
		c = n1 / raise_pow1(10, k);
		c = c + '0';
		buffer[i] = c;
		n1 = n1 % raise_pow1(10, k);
		k--;
		i++;
	}
	return (buffer);
}

char	*ft_itoa(int n)
{
	char			*buffer;
	int				n1;

	n1 = n;
	buffer = NULL;
	if (n == 0)
	{
		buffer = (char *) malloc(2);
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '0';
		buffer[1] = '\0';
	}
	if (n == -2147483648)
	{
		buffer = ft_strdup("-2147483648");
		if (buffer == NULL)
			return (NULL);
	}
	if (n < 0 && n != -2147483648)
		buffer = do_n1(buffer, n1);
	if (n > 0)
		buffer = do_n(buffer, n1);
	return (buffer);
}
