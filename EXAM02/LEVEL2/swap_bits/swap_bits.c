/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:09:56 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/10 23:11:02 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
    // Shift the four most significant bits to the right to the position of the four least significant bits,
	//and OR them with the four least significant bits shifted to the left to the position of the four 
	//most significant bits
    return ((octet >> 4 | octet << 4));
}