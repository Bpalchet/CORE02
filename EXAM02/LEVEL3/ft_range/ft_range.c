/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:13:16 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/27 19:48:46 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int array_len(int start, int end)
{
	int len = 0;
	
	len = (start - end);
	if (len < 0)
		len = len * -1;
	len = len + 1;
	printf("Len = %d\n", len);
	return (len);
}

int	*ft_range(int start, int end)
{
	int *array;
	int i = 0;
	int len;

	len = array_len(start, end);
	array = (int *)malloc((len + 1) * sizeof(int));
	if (start > end)
	{
		while (i < len)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	if (start < end)
	{
		while (i < len)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	array[i] = '\0';
	return (array);
}

int main(void)
{
	int start = -1;
	int end = 2;
	int *array;
	int i = 0;
	int len;

	len = array_len(start, end);
	array = (int *)malloc((len + 1) * sizeof(int));
	array = ft_range(start, end);
	while (array[i] != '\0')
	{
		printf("%d, ", array[i]);
		i++;
	}
	write (1, "\n", 1);
	free (array);
	return (0);
}