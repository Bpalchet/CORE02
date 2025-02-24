/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:53:23 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/28 19:26:30 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *str2)
{
	int	len;

	len = 0;
	while (*str2)
	{
		len++;
		str2++;
	}
	return (len);
}

size_t	ft_strspn(const char *s, const char *reject)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(reject);
	while (s[i] != '\0')
	{
		j = 0;
		while (j < len)
		{
			if (s[i] != reject[j])
				j++;
			else
				break ;
		}
		if (j == len)
			return (i);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	d;
// 	int d1;
// 	const char *str1 = "ciao bambino";
// 	const char *str2 = "ci";

// 	d = ft_strspn(str1, str2);
// 	printf(" Valore con FT_STRSPN e' %d\n", d);
// 	d1 = strspn(str1, str2);
// 	printf(" Valore con STRSPN e' %d\n", d1);
// 	return (0);
// }