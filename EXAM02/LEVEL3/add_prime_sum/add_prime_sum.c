/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:50:53 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/24 18:44:09 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}

void	ft_putnbr(int sum)
{
	char	c;

	if (sum >= 10)
		ft_putnbr(sum / 10);
	c = (sum % 10) + '0';
	write(1, &c, 1);
}

int	ft_isaprime(int p)
{
	int	i;

	i = 2;
	while (i < p)
	{
		if ((p % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_add_prime(int n)
{
	int	sum;
	int	i;

	sum = 0;
	i = 2;
	if (n < 2)
		return (0);
	while (i <= n)
	{
		if (ft_isaprime(i))
			sum = sum + i;
		i++;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	int	sum;
	int	n;

	if (argc != 2 || ft_atoi(argv[1]) <= 0)
	{
		write (1, "0\n", 2);
		return (0);
	}
	n = ft_atoi(argv[1]);
	sum = ft_add_prime (n);
	ft_putnbr(sum);
	write (1, "\n", 1);
	return (0);
}
