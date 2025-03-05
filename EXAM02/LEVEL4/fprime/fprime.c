/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:07:55 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/05 19:06:58 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void 	ft_fprime(int n)
{
	int i = 2;

	while (i <= n)
	{
		if (n % i != 0)
			i++;
		else if (n % i == 0)
		{
			if (n == i)
			{
				printf ("%d", n);
				return ;
			}
			printf ("%d*", i);
			n = n / i;
			i = 2;
		}
	}
}

int main (int argc, char **argv)
{
	int number;
	
	if (argc != 2)
	{
		printf ("\n");
		return (0);
	}
	number = atoi(argv[1]);
	if (number <= 0)
	{
		printf ("\n");
		return (0);
	}
	if (number == 1)
	{
		printf ("1\n");
		return (0);
	}
	ft_fprime(number);
	printf ("\n");
	return (0);
}
