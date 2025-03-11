/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:18:22 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/11 15:48:09 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void wdmatch (char *str1, char *str2)
{
	int i = 0, j = 0;

	while (str1[i] != '\0')
	{
		while (str2[j] != '\0')
		{
			if (str1[i] != str2[j])
				j++;
			else
			{
				j++;
				i++;
				break;
			}
		}
		if (str2[j] == '\0' && str1[i] != '\0')
		{
			write(1, "\n", 1);
			return;
		}
	}
	i = 0;
	while (str1[i] != '\0')
	{
		write(1, &str1[i], 1);
		i++;;
	}
	write(1, "\n", 1);
}


int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	wdmatch(argv[1], argv[2]);
	return(0);
}