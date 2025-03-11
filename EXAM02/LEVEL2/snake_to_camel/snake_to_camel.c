/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:41:16 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/11 19:33:16 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_print_buffer (char *buffer)
{
	int i = 0;
	while (buffer[i] != '\0')
	{
		write (1, &buffer[i], 1);
		i++;
	}
}

int ft_strlen(char *s)
{
	int len = 0, i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] != '_')
		{
			len++;
			i++;
		}
		else
			i++;
	}	
	return (len);
}

char	*ft_snake_to_camel(char *str)
{
	int len = ft_strlen(str);
	int i = 1, j = 0;
	char *buffer = (char *)malloc((len + 1) * sizeof(char));
	
	if (!buffer)
		return(NULL);
	if (str[0] != '_')
	{
		buffer[0] = str[0];
		j++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '_')
			i++;
		else if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == '_')
		{
			buffer[j] = str[i] - 32;
			j++;
			i++;
		}
		else
		{
			buffer[j] = str[i];
			j++;
			i++;
		}
	}
	buffer[len] = '\0';
	return (buffer);
}

int main (int argc, char **argv)
{
	char *buffer;
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	buffer = ft_snake_to_camel (argv[1]);
	ft_print_buffer(buffer);
	free (buffer);
	write(1, "\n", 1);
	return(0);
}