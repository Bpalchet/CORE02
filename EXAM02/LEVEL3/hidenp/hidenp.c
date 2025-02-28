/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:05:17 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/28 19:41:10 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen (char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len); 
}

int	ft_hidenp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = ft_strlen(s1);
	int len2 = ft_strlen(s2);
	
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				i++;
				if (i == len1)
				{
					write (1, "1", 1);
					return (0);
				}
				break ;
			}
			else if (s1[i] != s2[j])
			{
				j++;
				if (j == len2)
				{
					write(1, "0", 1);
					return (0);
				}
				break;
			}
		}
	}
	return (0);
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
