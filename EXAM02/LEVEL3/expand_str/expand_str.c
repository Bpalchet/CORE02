/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:51:09 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/24 22:56:32 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_end(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\t')
			i++;
		else if (str[i + 1] != '\0')
			return (1);
		else if (str[i + 1] == '\0')
			return (0);
	}
	return (0);
}

int	ft_jump_blank(char *str, int i)
{
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	return (i);
}

void	ft_expand_str(char *str)
{
	int	i;

	i = 0;
	i = ft_jump_blank(str, i);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			write (1, &str[i], 1);
			i++;
		}
		else if (str[i] == ' ' || str[i] == '\t')
		{
			if (check_end(str, i) == 0)
				return ;
			else if (check_end(str, i) == 1)
			{
				write (1, "   ", 3);
				i++;
			}
			i = ft_jump_blank(str, i);
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
	ft_expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
