/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:02:44 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/08 00:43:30 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void ft_print_buffer(char *buffer)
{
	int i = 0, index, flag = 0;
	
	while (buffer[i] != '\0')
	{
		if (buffer[i] == ' ')
			i++;
		while (buffer[i] != ' ')
		{
			if (buffer[i] == '\0')
				break;
			i++;
		}
		i++;
		index = i;
		while (buffer[i] != '\0')
		{
			if (buffer[i] == ' ' && buffer [i + 1] == '\0')
				break ;
			write(1, &buffer[i], 1);
			flag = 1;
			i++;
		}
		if (flag == 1)
			write (1, " ", 1);
		i = 0;
		while (i < index)
		{
			if (buffer[i] != ' ')
				write (1, &buffer[i], 1);
			i++;
		}
		return ;
	}
}

void ft_rostring (char *str)
{
	int len2, i = 0, j = 0, flag = 1;
	char *buffer;
	
	len2 = count_len(str);
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
	ft_print_buffer(buffer);
	free(buffer);
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