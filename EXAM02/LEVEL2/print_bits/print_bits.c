/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 23:06:46 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/01 00:46:09 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	scrivi_bit(char *array)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		write (1, &array[i], 1);
		i++;
	}
	return ;
}

void	print_bits(unsigned char octet)
{
	char	array[8];
	int		i;

	i = 0;
	while (i < 8)
	{
		array[i] = '0';
		i++;
	}
	if (octet == 0)
		write (1, "00000000", 8);
	i = 7;
	while (i >= 0)
	{
		array[i] = octet % 2 + '0';
		octet = octet / 2;
		if (octet >= 1)
			i--;
		else
		{
			scrivi_bit(array);
			break ;
		}
	}
	return ;
}

// int main(void)
// {
// 	unsigned char octet = 1;
// 	print_bits(octet);
// 	return (0);
// }