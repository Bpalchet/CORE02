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

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int g;

	if (a > b)
		g = a;
	else 
		g = b;
    if (a == 0 || b == 0)
    	return (0);
    while (1)
    {
        if ((g % a == 0) && (g % b == 0))
            return (g);
        g++;
    }
}

/*  #include <stdio.h>
 #include <stdlib.h>
 
 int main(int ac, char **av)
 {
 	if (ac == 3)
 	{
 		unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
 		printf("LCM: %u\n", m);
 	}
 } */
