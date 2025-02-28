/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:32:24 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/28 17:55:39 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	array_len(int start, int end)
{
	int len = 0;
	len = start - end + 1;
	if (len < 0)
		len = len * -1;
	return (len);
}

int	*ft_rrange(int start, int end)
{
	int len = 0, i = 0, j = end;
	int *array;
		
	len = array_len(start, end);
	array = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		if (end > start)
		{
			array[i] = j;
			j--;
			i++;
		}
		else if (end <= 0)
		{
			array[i] = j;
			j++;
			i++;
		}
	}
	return (array);
}

/* int main(void)
{
	int start = 10;
	int end = -3;
	int *array;
	int k = 0;
	int len;

	len = array_len(start, end);
	array = (int *)malloc((len) * sizeof(int));
	array = ft_rrange(start, end);
	while (k < len)
	{
		printf("%d, ", array[k]);
		k++;
	}
	printf("\n");
	free (array);
	return (0);
} */
