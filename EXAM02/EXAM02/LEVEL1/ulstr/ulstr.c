/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:11:29 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/26 19:24:58 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ulstr(char *str)
{
	char	letter;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			letter = *str - 32;
		else if (*str >= 65 && *str <= 90)
			letter = *str + 32;
		else
			letter = *str;
		write (1, &letter, 1);
		str++;
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
	ulstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}
