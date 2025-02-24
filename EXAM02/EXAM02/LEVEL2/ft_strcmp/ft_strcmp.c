/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:24:47 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/28 17:49:31 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}

// int	main(void)
// {
// 	int diff = 0;
// 	const char *str1 = "ciao";
// 	const char *str2 = "";

// 	diff = ft_strcmp(str1, str2);
// 	printf(" La differenza con FT_STRCMP e' %d\n", diff);
// 	diff = strcmp(str1, str2);
// 	printf(" La differenza con STRCMP e' %d\n", diff);
// 	return (0);
// }
