/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:29:18 by bpalchet          #+#    #+#             */
/*   Updated: 2025/02/13 15:51:17 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_1st_letter(char *camel, char *str)
{
	int	k;

	k = 0;
	if (str[0] == '_')
		k = 0;
	else if (str[0] >= 65 && str[0] <= 90)
		camel[k++] = str[0] + 32;
	else
		camel[k++] = str[0];
	return (k);
}

int	ft_strlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '_')
		{
			len++;
			i++;
		}
		else
			i++;
	}
	return (len);
}

char	*ft_snake_to_camel(char **argv)
{
	int		j;
	int		k;
	int		len;
	char	*camel;

	len = ft_strlen(argv[1]);
	camel = (char *)malloc(len * sizeof(char));
	j = 1;
	k = ft_1st_letter(camel, argv[1]);
	while (argv[1][j] != '\0')
	{
		if (argv[1][j] == '_')
			j++;
		else if ((argv[1][j] >= 65 && argv[1][j] <= 90)
				&& argv[1][j - 1] != '_')
			camel[k++] = argv[1][j++] + 32;
		else if ((argv[1][j] >= 97 && argv[1][j] <= 122)
				&& argv[1][j - 1] == '_')
			camel[k++] = argv[1][j++] - 32;
		else
			camel[k++] = argv[1][j++];
	}
	return (camel);
}

int	main(int argc, char **argv)
{
	char	*camel;
	int		count;

	if (argc == 2 && argv[1] != NULL)
	{
		camel = ft_snake_to_camel(argv);
		count = 0;
		while (camel[count] != '\0')
		{
			write(1, &camel[count], 1);
			count++;
		}
		free(camel);
	}
	write(1, "\n", 1);
	return (0);
}
