/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:19:11 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/25 17:28:41 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/*int	main(void)
{
	char	*str = "";
	int	len = 0;

	len = ft_strlen (str);
	printf ("Lunghezza con FT_STRLEN = %d\n", len);
	len = strlen (str);
	printf ("Lunghezza con STRLEN = %d\n", len);
	return (0);
}*/