/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:43:10 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/03 23:58:52 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;
	
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + 48;
	write (1, &c, 1);
}

int	ft_atoi (char *num)
{
	int i = 0, n = 0;
	
	while (num[i])
	{
		n = n * 10 + (num[i] - 48);
		i++;
	}
	return (n);
}

void	ft_tab_mult (char *num)
{
	int n, j = 1, prod = 0;
	char c;
	
	n = ft_atoi(num);
	while (j <= 9)
	{
		c = j + 48;
		write(1, &c, 1);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		prod = j * n;
		ft_putnbr(prod);
		write(1, "\n", 1);
		j++;
	}	
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_tab_mult(argv[1]);
	write (1, "\n", 1);
	return (0);
}
