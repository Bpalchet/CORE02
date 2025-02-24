/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:27:28 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/27 16:14:37 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_alpha_mirror(char *str)
{
	char	letter;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			letter = 155 - str[i];
			write (1, &letter, 1);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			letter = 219 - str[i];
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
		write (1, "\n", 1);
	ft_alpha_mirror(argv[1]);
	write (1, "\n", 1);
	return (0);
}
