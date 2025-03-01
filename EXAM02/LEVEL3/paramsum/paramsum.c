/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:53:39 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/01 12:53:39 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

/* 	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	} */
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + 48;
	write (1, &c, 1);
}

int main (int argc, char **argv)
{
	int i = 0, param;

	if (argc == 0)
	 return (0);
	while (argv[i] != NULL)
		i++;
	param = i - 1;
	if (param <= 9)
	{
		param = param + 48;
		write (1 , &param, 1);
	}
	else
	ft_putnbr (param);
	write (1, "\n", 1);
	return (0);
}
