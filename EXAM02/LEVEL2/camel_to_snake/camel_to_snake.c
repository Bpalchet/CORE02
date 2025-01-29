/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:17:06 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/27 17:08:26 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	camel_to_snake(char *str)
{
	int		i;
	char	letter;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			write(1, &str[i], 1);
		else if (str[i] >= 65 && str[i] <= 90)
		{
			write(1, "_", 1);
			letter = str[i] + 32;
			write(1, &letter, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "\n", 1);
	camel_to_snake(argv[1]);
	write (1, "\n", 1);
	return (0);
}
