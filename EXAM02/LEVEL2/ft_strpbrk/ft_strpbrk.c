/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:47:22 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/29 17:35:37 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strpbrk(const char *src, const char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (src[i])
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (src[i] == charset[j])
				return (src[i]);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*d;
// 	const char	*d1;
// 	const char *str1 = "ciao bambino";
// 	const char *str2 = "bi";

// 	d = ft_strpbrk(str1, str2);
// 	printf(" Primo carattere uguale con FT_STRPBRK e' %s\n", d);
// 	d1 = strpbrk(str1, str2);
// 	printf(" Primo carattere uguale con STRPBRK e' %s\n", d1);
// 	return (0);
// }