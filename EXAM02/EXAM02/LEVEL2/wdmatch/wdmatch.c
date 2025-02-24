/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:07:58 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/06 18:08:15 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_control(char **argv, int i, int *j)
{
	int	len1;
	int	len2;

	len1 = ft_strlen(argv[1]);
	len2 = ft_strlen(argv[2]);
	while (*j < len2)
	{
		if ((argv[1][i] != argv[2][*j]) && (*j == len2 - 1))
			return (0);
		else if (argv[1][i] != argv[2][*j] && (*j < len2 - 1))
			(*j)++;
		else if (argv[1][i] == argv[2][*j] && (i < len1 - 1))
			break ;
		else if (argv[1][i] == argv[2][*j] && (i == len1 - 1))
		{
			ft_print(argv[1]);
			return (0);
		}
	}
	return (0);
}

int	ft_wdmatch(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		ft_control(argv, i, &j);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_wdmatch(argv);
	write(1, "\n", 1);
	return (0);
}
