/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:09:32 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/05 19:52:44 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int len = 2, num = nbr, i, lim = 0;
	char *number;
	
	if (nbr < 0)
	{
		num = nbr * -1;
		lim = 1;
	}
	while (num / 10 >= 1)
	{
		num = num / 10;
		len++;
	}
	num = nbr;
	if (nbr < 0)
	{
		len = len + 1;
		num = nbr * -1;
	}
	number = (char *)malloc(len * sizeof(char));
	if (nbr < 0)
		number[0] = '-';
	i = len - 2;
	while (i >= lim)
	{
		number[i] = num % 10 + 48;
		num = num / 10;
		i--;
	}
	number[len] = '\0';
	return (number);
}

/* int main (void)
{
	int n = -345;
	char *number;

	number = ft_itoa(n);
	printf(" n = %s", number);
	return (0);
} */