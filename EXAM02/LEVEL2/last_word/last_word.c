/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:15:34 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/29 20:05:47 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	ft_scrivi(const char *str, int k)
{
	int	j;

	j = ft_strlen(str) - k;
	while (str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
	{
		write (1, &str[j], 1);
		j++;
	}
	return (0);
}

int	last_word(const char *str)
{
	int	i;
	int	k;

	k = 0;
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		while ((str[i] == ' ') || (str[i] == '\t'))
		{
			k++;
			i--;
		}
		if ((str[i] >= 32 && str[i] <= 126) && (str[i - 1] != ' ')
			&& (str[i - 1] != '\t'))
			k++;
		else
		{
			k++;
			break ;
		}
		i--;
	}
	ft_scrivi(str, k);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
