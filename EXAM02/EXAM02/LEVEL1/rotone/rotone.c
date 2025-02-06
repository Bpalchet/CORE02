/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:19:55 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/26 18:43:53 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rotone(char *str)
{
	int		i;
	char	letter;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			if (str[i] == 'z')
				letter = 'a';
			else if (str[i] == 'Z')
				letter = 'A';
			else
				letter = str[i] + 1;
			write (1, &letter, 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	rotone(argv[1]);
	write (1, "\n", 1);
	return (0);
}
