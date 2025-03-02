/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:46:57 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/02 19:46:57 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_pgcd (int a, int b)
{
	int i, j;

	if (a == b)
		return (a);
	if (b > a)
	{
		j = b;
		b = a;
		a = j;
	}
	i = b;
	while (i > 0)
	{
		if ((a % i == 0) && (b % i == 0))
			return (i);
		i--;
	}
	return (1);
}

int main (int argc, char **argv)
{
	int num1 = 0, num2 = 0, pgcd;
	
	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	pgcd = ft_pgcd (num1, num2);
	printf ("%d\n", pgcd);
	return (0);
}
