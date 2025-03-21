#include <unistd.h>

void ft_print_s1(char *s)
{
	int i = 0, j = 0, flag = 0;

	while (!(s[i] >= 32 && s[i] <= 126))
		i++;
	while (s[i] != '\0')
	{
		flag = 0;
		j = 0;
		while (j < i)
		{
			if (s[j] == s[i])
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 1)
			i++;
		else
		{	
			write (1, &s[i], 1);
			i++;
		}
	}
}

int ft_checks1(char *s1, char *s2, int i)
{
	int k = 0;
	
	while (s1[k] != '\0')
	{
		if (s1[k] == s2[i])
			return (1);
		else 
			k++;
	}
	return (0);
}

void ft_union(char *str1, char *str2)
{
	int i = 0, j = 0, flag = 0;

	ft_print_s1(str1);
	i = 0;
	while (str2[i] != '\0')
	{
		flag = ft_checks1(str1, str2, i);
		if (flag == 1)
			i++;
		else if (flag == 0 && i == 0)
		{
			write (1, &str2[i], 1);
			i++;
		}
		else
		{
			j = 0;
			while (j < i)
			{
				if (str2[j] == str2[i])
				{
					flag = 1;
					break;
				}
				j++;
			}
			if (flag == 1)
			i++;
			else
			{	
				write (1, &str2[i], 1);
				i++;
			}
		}
	}
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_union(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}