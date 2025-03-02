/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:43:34 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/02 20:43:34 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_hex(int c)
{
	char a;

	if (c >= 0 && c < 9)
		a = c + 48;
	else if (c == 10)
		a = 'a';
	else if (c == 11)
		a = 'b';
	else if (c == 12)
		a = 'c';
	else if (c == 13)
		a = 'd';
	else if (c == 14)
		a = 'e';
	else if (c == 15)
		a = 'f';
	return (a);
}

int ft_atoi(const char *str)
{
    int i = 0, num = 0;

    while (str[i] == ' ')
        i++;
    if (!(str[i] >= '0' && str[i] < '9') && !(str[i] == '+'))
        return(0);
    if ((str[i] == '+') && !(str[i++] >= '0' && str[i++] < '9'))
        return (0);
    if ((str[i] == '+') && (str[i++] >= '0' && str[i++] < '9'))
        i++;
    while (str[i] != '\0' && (str[i] >= '0' && str[i] < '9'))
    {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    return (num);
}

int	ft_print_hex(int num_dec)
{
	char a;
	
	if (num_dec >= 16)
		ft_print_hex(num_dec / 16);
	a = ft_hex(num_dec % 16);
	write (1, &a, 1);
	return (0);
}

int main (int argc, char **argv)
{
	int num_dec;
	
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	num_dec = ft_atoi (argv[1]);
	if (num_dec < 0)
		return (0);
	ft_print_hex(num_dec);
	write (1, "\n", 1);
	return (0);
}