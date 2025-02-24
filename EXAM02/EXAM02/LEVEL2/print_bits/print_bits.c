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

void	print_bits(unsigned char octet)
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
}

/* int main(void)
{
 	unsigned char octet = 255;
 	print_bits(octet);
 	return (0);
} */