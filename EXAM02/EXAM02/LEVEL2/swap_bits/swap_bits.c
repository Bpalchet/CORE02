/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:49:33 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/12 11:04:15 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/* void	print_bits(unsigned char octet)
{
	int	i;
	int	bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((octet >> i) & 1) + 48;
		write (1, &bit, 1);
		i--;
	}
	return ;
} */

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 | octet >> 4);
}

/* int main(void)
{
 	unsigned char octet = 115;
	unsigned char etoct;
	
	print_bits(octet);
	write (1, "\n", 1);
 	etoct = swap_bits(octet);
	print_bits(etoct);
	write (1, "\n", 1);
 	return (0);
} */