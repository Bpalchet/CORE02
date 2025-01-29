/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:20 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/29 19:53:01 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(const char *s1, int i)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (s1[i] != s1[k])
			k++;
		else
			return (0);
	}
	write (1, &s1[i], 1);
	return (0);
}

int	ft_inter(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				ft_check(s1, i);
				break ;
			}
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_inter(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
