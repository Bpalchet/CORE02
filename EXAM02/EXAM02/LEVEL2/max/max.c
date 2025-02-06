/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:08:58 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/30 23:53:19 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				num;

	i = 1;
	if (tab == NULL)
		return (0);
	num = tab[0];
	while (i < len)
	{
		if (tab[i] > num)
			num = tab[i];
		i++;
	}
	return (num);
}

// int	main(void)
// {
// 	int num;
// 	int len = 0;

// 	int *tab = NULL;	
// 	//int tab[] = {2, -3, 6, 3, 8, 79, 234, 6743, 1, -39};
// 	num = max(tab, len);
// 	printf ("Il numero più grande e' %d\n", num);
// 	return (0);
// }