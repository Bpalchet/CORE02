/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:13:16 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/28 17:30:58 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int array_len(int start, int end)
{
	int len = 0;
	
	len = (start - end);
	if (len < 0)
		len = len * -1;
	len = len + 1;
	return (len);
}

int	*ft_range(int start, int end)
{
	int *array;
	int i = 0;
	int j = start;
	int len;

	len = array_len(start, end);
	array = (int *)malloc((len) * sizeof(int));
	if (start >= end)
	{
		while (i < len)
		{
			array[i] = j;
			j--;
			i++;
		}
	}
	if (start < end)
	{
		while (i < len)
		{
			array[i] = j;
			j++;
			i++;
		}
	}
	return (array);
}

int main(void)
{
	int start = 10;
	int end = -3;
	int *array;
	int k = 0;
	int len;

	len = array_len(start, end);
	//printf("Len = %d\n", len);
	array = (int *)malloc((len) * sizeof(int));
	array = ft_range(start, end);
	while (k < len)
	{
		printf("%d, ", array[k]);
		k++;
	}
	printf("\n");
	free (array);
	return (0);
}
