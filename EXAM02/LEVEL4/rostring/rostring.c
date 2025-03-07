/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:02:44 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/07 19:52:01 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int count_len(char *str)
{
	int len = 0, i = 0, flag = 1;
	
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t') && flag == 0)
		{	
			flag = 1;
			len++;
			i++;
		}
		else if ((str[i] == ' ' || str[i] == '\t') && flag == 1)
			i++;
		else if (str[i] != ' ' || str[i] != '\t')
		{
			flag = 0;
			i++;
			len++;
		}
	}
	return (len);
}

int ft_strlen(char *str)
{
	int len = 0;
	
	while (str[len] != '\0')
	len++;
	return (len);
}

void ft_rostring (char *str)
{
	int len, len2, i = 0, j = 0, flag = 1;
	char *buffer;
	
	len = ft_strlen(str);
	printf ("len pura = %d\n", len);
	len2 = count_len(str);
	printf ("len epurata = %d\n", len2);
	buffer = (char *)malloc((len2 + 1) * sizeof(char));
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t') && flag == 0)
		{	
			buffer[j] = ' ';
			flag = 1;
			i++;
			j++;
		}
		else if ((str[i] == ' ' || str[i] == '\t') && flag == 1)
			i++;
		else if (str[i] != ' ' || str[i] != '\t')
		{
			flag = 0;
			buffer[j] = str[i];
			i++;
			j++;
		}
	}
	buffer[j] = '\0';
	printf ("la stringa depurata = %s", buffer);
}

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_rostring(argv[1]);
	write (1, "\n", 1);
	return (0);
}