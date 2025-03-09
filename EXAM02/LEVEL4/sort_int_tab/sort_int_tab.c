/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:58:27 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/09 16:58:34 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/* void ft_print_tab_int (int *tab, unsigned int size)
{
	unsigned int i = 0;
	
	while (i < size)
	{
		printf ("%d\n", tab[i]);
		i++;
	}
} */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0, j, swap = 0;
	
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab [j];
				tab[j] = swap;
				j++;
			}
			else
				j++;
		}
		i++;
	}
}

/* int	main(void)
{
	unsigned int	size;
	int tab[30] = {
		66, 45, 23, 67, 89, 34, 78, 90, 11, 56,
		22, 49, 38, 77, 66, 85, 99, 31, 17, 44,
		66, 53, 61, 72, 19, 81, 95, 66, 68, 1
	};
	size = 30;
	ft_print_tab_int(tab, size);
	sort_int_tab(tab, size);
	printf("\n");
	ft_print_tab_int(tab, size);
	printf("\n");
	return (0);
} */