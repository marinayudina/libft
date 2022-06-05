/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpono <bpono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:23:51 by bpono             #+#    #+#             */
/*   Updated: 2021/10/25 14:53:22 by bpono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	raise_pow(int x, int power)
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

int	ft_count(int n1, int k)
{
	while (n1 > 0)
	{
		n1 = n1 / 10;
		k++;
	}
	k = k - 1;
	return (k);
}

void	ft_write(int c, int n, int k, int fd)
{
	while (k != -1)
	{
		c = n / raise_pow(10, k);
		c = c + '0';
		write(fd, &c, 1);
		n = n % raise_pow(10, k);
		k--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	n1;
	int	k;
	int	c;

	n1 = n;
	k = 0;
	c = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
		n1 = n;
	}
	k = ft_count(n1, k);
	ft_write(c, n, k, fd);
}
