/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:12:34 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/27 17:33:34 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	do_op(char *n1, char *op, char *n2)
{
	int	i1;
	int	i2;
	int	res;

	i1 = atoi (n1);
	i2 = atoi (n2);
	if (*op == '+')
		res = i1 + i2;
	else if (*op == '/')
		res = i1 / i2;
	else if (*op == '*')
		res = i1 * i2;
	else if (*op == '-')
		res = i1 - i2;
	else if (*op == '%')
		res = i1 % i2;
	return (res);
}

int	main(int argc, char **argv)
{
	int	res;

	if (argc != 4)
		write (1, "\n", 1);
	res = do_op(argv[1], argv[2], argv[3]);
	printf ("%d\n", res);
	return (0);
}
