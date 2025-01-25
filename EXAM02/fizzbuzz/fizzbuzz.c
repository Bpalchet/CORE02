/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:13:43 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/25 16:09:35 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	stampa_numero(int i)
{
	char	d;
	char	u;

	if ((i / 10) >= 1)
	{
		d = (i / 10) + '0';
		u = (i % 10) + '0';
		write (1, &d, 1);
		write (1, &u, 1);
		write (1, "\n", 1);
		return (0);
	}
	u = i + '0';
	write (1, &u, 1);
	write (1, "\n", 1);
	return (0);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			write(1, "fizzbuzz\n", 9);
		else if ((i % 3) == 0 && (i % 5) != 0)
			write(1, "fizz\n", 5);
		else if ((i % 3) != 0 && (i % 5) == 0)
			write(1, "buzz\n", 5);
		else
			stampa_numero(i);
		i++;
	}
	return (0);
}
