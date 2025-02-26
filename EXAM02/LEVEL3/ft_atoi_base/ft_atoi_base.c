/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:21:34 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/26 19:29:23 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_checknr(char nr)
{
	if (nr == 'a' || nr == 'A')
		return (10);
	else if (nr == 'b' || nr == 'B')
		return (11);
	else if (nr == 'c' || nr == 'C')
		return (12);
	else if (nr == 'd' || nr == 'D')
		return (13);
	else if (nr == 'e' || nr == 'E')
		return (14);
	else if (nr == 'f' || nr == 'F')
		return (15);
	else
		return (nr - 48);
}

int ft_strlen(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int ft_maxdec(const char *str, int base)
{
	int len = 0, i = 0, flag = 0, n = 0;
	
	len = ft_strlen(str);
	n = 0;
	while (i < len)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			flag = 1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= (base + 48))
		{
			while (str[i] >= '0' && str[i] <= (base + 48))
			{
				n = (n * base) + (str[i] - 48);
				i++;
			}
		}
		else
			return (0);
	}
	if (flag == 1)
		n = n * -1;
	return (n);
}

int ft_maxexa(const char *str, int base)
{
	int len = 0, i = 0, flag = 0, n = 0;
	
	len = ft_strlen(str);
	while (i < len)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				flag = 1;
			i++;
		}
		while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= ((base - 10) + 96)) || (str[i] >= 'A' && str[i] <= ((base - 10) + 64)))
		{
			if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= ((base - 10) + 96)) || (str[i] >= 'A' && str[i] <= ((base - 10) + 64)))
			{
				n = (n * base) + ft_checknr(str[i]);
				i++;
			}
			else
				break;
		}
	}
	if (flag == 1)
		n = n * -1;
	return (n);
}

int	ft_atoi_base(const char *str, int base)
{
	int n;

	if (base < 2 || base > 16)
		return (0);
	else if (base >= 2 && base <= 10)
		n = ft_maxdec(str, base);
	else if (base > 10 && base <= 16)
		n = ft_maxexa(str, base);
	return (n);
}

int main(void)
{
	char *str = "   -10c";
	int base = 10;
	int n;

	n = ft_atoi_base(str, base);
	printf("il numero trovato e' %d", n);
	return (0);
}
