/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:51:17 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/28 18:40:15 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] != reject[j])
				j++;
			else
				return (i);
		}
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	d;
// 	const char *str1 = "ciao bambino";
// 	const char *str2 = "";

// 	d = ft_strcspn(str1, str2);
// 	printf(" Valore con FT_STRCSPN e' %d\n", d);
// 	d = strcspn(str1, str2);
// 	printf(" Valore con STRCMP e' %d\n", d);
// 	return (0);
// }