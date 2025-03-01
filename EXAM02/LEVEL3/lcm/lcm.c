/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:57:13 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/01 11:57:13 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_lcm(unsigned int a, unsigned int b)
{
	unsigned int i = 1, c = 0, d;

	if (a == 0 || b == 0)
		return (c);
	if (a == b)
		return (a);
	if (a < b)
	{
		d = a;
		a = b;
		b = d;
	}
	while (i <= b)
	{
		c = a * i;
		if ((c % b) == 0)
			return (c);
		i++;
	}
	return (a * b);
}

/*int main (void)
{
	unsigned int num1, num2, lcm;
	
	num1 = 4500;
	num2 = 0;
	lcm = ft_lcm(num1, num2);
	printf("Il MCM tra %d e %d e' %d\n", num1, num2, lcm);
	return (0);
}*/
