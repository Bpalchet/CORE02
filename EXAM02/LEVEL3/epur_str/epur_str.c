/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:36:23 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/24 19:16:41 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			write (1, &str[i], 1);
			i++;
		}
		else if ((str[i] == ' ' || str[i] == '\t')
			&& ((str[i + 1] != ' ' && str[i + 1] != '\t')))
		{
			write (1, &str[i], 1);
			i++;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2 || (argv[1]) == NULL)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_epur_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
