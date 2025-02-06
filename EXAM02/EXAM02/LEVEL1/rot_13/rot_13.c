/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:39:04 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/26 18:18:53 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_scrivi(char *str, int max, int i)
{
	char	letter;

	if ((str[i] + 13) > max)
		letter = str[i] - 13;
	else
		letter = str[i] + 13;
	write (1, &letter, 1);
	return (0);
}

int	rot_13(char *str)
{
	int	i;
	int	max;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			max = 90;
			ft_scrivi(str, max, i);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			max = 122;
			ft_scrivi(str, max, i);
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
	rot_13(argv[1]);
	write (1, "\n", 1);
	return (0);
}
