/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:27:54 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/29 00:46:42 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(len * sizeof(char));
	if (!*src)
		return (0);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {

// 	char *src = "Forza ragazzi!";
// 	char *dest;

// 	printf(" Stringa originale = %s\n", src);
// 	dest = ft_strdup(src);
// 	printf(" Stringa duplicata = %s\n", dest);
// 	dest = strdup(src);
// 	printf(" Stringa duplicata con STRDUP = %s\n", dest);	
// 	free(dest);
// 	return (0);
// }