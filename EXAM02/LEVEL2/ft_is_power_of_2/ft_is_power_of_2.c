/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_power_of_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:01:53 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/11 15:01:58 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_is_power_of_2(unsigned int n)
{
	int	div;

	div = n;
	if (n <= 0 || n > 2147483647)
		return (0);
	if (n == 1)
		return (1);
	if ((div % 2) == 1)
		return (0);
	while ((div % 2) != 1 && div != 1)
	{
		div = div / 2;
		if (div == 2)
			return (1);
	}
	return (0);
}

/* int	main(void)
{
	unsigned int n = 2147483648;
	int flag;

	flag = ft_is_power_of_2(n);
	if (flag == 1)
		printf("il numero %i e' una potenza di 2", n);
	else
		printf("il numero %i non e' una potenza di 2", n);	
	return (0);
} */
