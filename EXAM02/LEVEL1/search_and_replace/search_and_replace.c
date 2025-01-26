/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:44:58 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/26 19:07:59 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	search_and_replace(char *str, char a, char b)
{
	int		i;
	char	letter;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			letter = b;
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
	if ((argc != 4) || (argv[2][1] != '\0') || (argv[3][1] != '\0'))
	{
		write (1, "\n", 1);
		return (0);
	}
	search_and_replace (argv[1], (char)*argv[2], (char)*argv[3]);
	write (1, "\n", 1);
	return (0);
}
