/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:37:47 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/28 00:26:56 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	first_check(const char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '-') && !(str[i] == '+') && !(str[i] >= 48 && str[i]
			<= 57) && !(str[i] >= 9 && str[i] <= 13) && str[i] != ' ')
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_count(const char *str, int i, int mul)
{
	int	res;
	int	j;
	int	k;

	while (mul > 1)
	{
		j = 0;
		k = 1;
		while (j < mul - 1)
		{
			k *= 10;
			j++;
		}
		res += k * (str[i] - '0');
		i++;
		mul--;
	}
	res = res + (str[i] - '0');
	return (res);
}

int	ft_multiplier(const char *str, int i)
{
	int	mul;
	int	j;

	mul = 0;
	j = i;
	while (str[j] >= 48 && str[j] <= 57)
	{
		mul++;
		j++;
	}
	return (mul);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	flag;
	int	i;
	int	mul;

	res = 0;
	flag = 1;
	i = first_check(str);
	if (!(str[i] == '-') && !(str[i] == '+') && !(str[i] >= 48
			&& str[i] <= 57))
		return (0);
	if (((str[i] == '-') || (str[i] == '+')) && (!(str[i + 1] >= 48
				&& str[i + 1] <= 57)))
		return (0);
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	mul = ft_multiplier(str, i);
	res = ft_count(str, i, mul) * flag;
	return (res);
}

/* int	main (void)
{
	const char *str = "/3876    654 ";
	int res;

	res = ft_atoi(str);
	printf ("N.ro trovato con FT_ATOI = %d\n", res);
	res = atoi(str);
	printf ("N.ro trovato con ATOI = %d\n", res);
	return (0);
}*/
