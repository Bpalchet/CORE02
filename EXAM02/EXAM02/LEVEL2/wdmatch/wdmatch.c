#include <unistd.h>

int	ft_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_wdmatch(char **argv)
{
	int	i;
	int	j;
	int	len1;
	int len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(argv[1]);
	len2 = ft_strlen(argv[2]);
	while (argv[1][i])
	{
		while (j < len2)
		{
			if ((argv[1][i] != argv[2][j]) && (j == len2 - 1))
				return (0);
			else if (argv[1][i] != argv[2][j] && (j < len2 - 1))
				j++;
			else if (argv[1][i] == argv[2][j] && (i < len1 - 1))
				break;
			else if (argv[1][i] == argv[2][j] && (i == len1 - 1))
			{
				ft_print(argv[1]);
				return (0);
			}
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_wdmatch(argv);
	write(1, "\n", 1);
	return (0);
}
