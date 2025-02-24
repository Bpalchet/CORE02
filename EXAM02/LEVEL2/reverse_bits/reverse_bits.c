/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:44:07 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/02 12:21:35 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	res;

	res = 0;
	i = 8;
	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

// int	main(void)
// {
// 	unsigned char bit = 'b';
// 	unsigned char res = reverse_bits(bit);

// 	int i = 8;
// 	printf ("il bit originale = ");
// 	while (i--)
// 		printf("%d", (bit >> i) & 1);
// 	printf ("\n");
// 	i = 8;
// 	printf ("il bit rovesciato = ");
// 	while (i--)
// 	{
// 		bit = (res >> i & 1) + 48;
// 		printf("%c", bit);
// 	}
// 	printf ("\n");
// 	return (0);
// }