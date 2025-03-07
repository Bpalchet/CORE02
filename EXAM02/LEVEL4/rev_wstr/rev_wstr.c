/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:11:24 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/07 18:57:47 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int len = 0;
	
	while (str[len] != '\0')
	len++;
	return (len);
}

int ft_write_word(char *buffer, int len)
{
	int i = len - 1, iend, istart, k;
	
	while (i >= 0)
	{
		while (buffer[i] == ' ' || buffer[i] == '\t')
			i--;
		iend = i;
		while (buffer[i] != ' ' && buffer[i] != '\t' && i > 0)
			i--;
		if (i == 0)
			istart = 0;
		else
			istart = i + 1;
		k = istart;
		while (k <= iend)
		{	
			write (1, &buffer[k], 1);
			k++;
		}
		if (i == 0)
			return (0);
		else
		{
			write (1, " ", 1);
			return (len - (iend - istart) - 2);
		}
	}
	return (0);
}

void ft_rev_wstr (char *str)
{
	int i, len, new_len, j;
	char *buffer;

	len = ft_strlen(str);
	i = len - 1;
	while (i >= 0)
	{
		buffer = (char *)malloc((len + 1) * sizeof(char));
		j = 0;
		while (j < len)
		{
			buffer[j] = str[j];
			j++;
		}
		buffer[len] = '\0';
		new_len = ft_write_word(buffer, len);
		free (buffer);
		len = new_len;
		i = len - 1;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_rev_wstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}
