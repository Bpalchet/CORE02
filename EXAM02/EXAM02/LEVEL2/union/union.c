/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:53:28 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/12 16:56:13 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printup(char **argv, int charset[256])
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (charset[(int)argv[1][i]] == 1)
		{
			write (1, &argv[1][i], 1);
			charset[(int)argv[1][i]] = 0;
		}
		i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		if (charset[(int)argv[2][i]] == 1)
		{
			write (1, &argv[2][i], 1);
			charset[(int)argv[2][i]] = 0;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	charset[256];

	i = 0;
	if (argc == 3)
	{
		while (i < 255)
			charset[i++] = 0;
		i = 0;
		while (argv[1][i] != '\0')
		{
			charset[(int)argv[1][i]] = 1;
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			charset[(int)argv[2][i]] = 1;
			i++;
		}
		ft_printup(argv, charset);
	}
	write (1, "\n", 1);
	return (0);
}
