/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:36:57 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/29 18:06:30 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
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

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		len;
	char	swap;

	i = 0;
	len = ft_strlen(str);
	j = len - 1;
	while (i < (len / 2))
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i++;
		j--;
	}
	return (str);
}

// int	main(void)
// {

// 	char str[] = "in girum imus nocte et consumimur igni";

// 	printf(" Stringa normale = %s\n", str);
// 	printf(" Stringa rovescia = %s\n", ft_strrev(str));
// 	return (0);
// }