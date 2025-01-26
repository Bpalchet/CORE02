/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:30:49 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/26 20:01:07 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t'))
			i++;
		else if (str[i] >= 33 && str[i] <= 126)
		{
			write (1, &str[i], 1);
			if ((str[i + 1] == ' ') || (str[i + 1] == '\t'))
				return (0);
			i++;
		}
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
	first_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
