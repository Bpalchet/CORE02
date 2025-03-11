/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:26:15 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/11 18:36:32 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_union (char *str1, char *str2)
{
	int i = 1, j, flag = 1;

	write (1, &str1[0], 1);
	while (str1[i] != '\0')
	{
		j = 0;
		while (j < i)
		{
			if (str1[i] != str1[j])
			{
				flag = 1;
				j++;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			write (1, &str1[i], 1);
		i++;
	}
	flag = 1;
	i = 0;
	while (str2[i] != '\0')
	{
		j = 0;
		while (str1[j] != '\0' && str2[i] != '\0')
		{
			if (str2[i] != str1[j])
			{
				flag = 1;
				j++;
			}
			else
			{
				flag = 0;
				j = 0;
				i++;
			}
		}
		j = 0;
		while (j < i && str2[i] != '\0')
		{
			if (str2[i] != str2[j])
			{
				flag = 1;
				j++;
			}
			else
			{
				flag = 0;
				break;
			}	
		}
        if (flag == 1)
            write (1, &str2[i], 1);
        if (str2[i] != '\0')
          i++;
        else
          return;
	}
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union (argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}