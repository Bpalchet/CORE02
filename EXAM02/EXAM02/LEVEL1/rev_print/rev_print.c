/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:14:19 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/26 17:36:10 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	rev_print(char *str)
{
	int	len;
	int	j;

	len = ft_strlen(str);
	j = len - 1;
	while (j >= 0)
	{
		write (1, &str[j], 1);
		j--;
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
	rev_print(argv[1]);
	write (1, "\n", 1);
	return (0);
}
