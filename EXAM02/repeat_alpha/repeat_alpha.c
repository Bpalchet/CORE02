/* ****************************************************************** */
/*                                                                    */
/*                                                :::      ::::::::   */
/*   repeat_alpha.c                             :+:      :+:    :+:   */
/*                                            +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>   +#+  +:+       +#+       */
/*                                          ----------    +#+         */
/*   Created: 2025/01/23 15:34:04 by bpalchet    #+#    #+#           */
/*   Updated: 2025/01/23 15:34:04 by bpalchet   ###   ########.fr     */
/*                                                                    */
/* ****************************************************************** */

#include <unistd.h>

int	ft_scrivi(char lettera, int delta)
{
	int	j;

	j = 0;
	while (j < lettera - delta)
	{
		write(1, &lettera, 1);
		j++;
	}
	return (0);
}

void	*repeat_alpha(char *str)
{
	int	i;
	int	delta;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			delta = 96;
			ft_scrivi(str[i], delta);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			delta = 64;
			ft_scrivi(str[i], delta);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		repeat_alpha(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
