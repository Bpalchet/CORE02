#include <unistd.h>

int ft_checks1(char *s, int i)
{
	int k = 0;
	
	while (k < i)
	{
		if (s[k] == s[i])
			return (1);
		else 
			k++;
	}
	return (0);
}

void ft_inter(char *s1, char *s2)
{
	int i = 0, j = 0, flag;

	while ( s1[i] != '\0')
	{
		flag = ft_checks1(s1, i);
		if (flag == 1)
			i++;
		else
		{
			j = 0;
			while (s2[j] != '\0')
			{
				if (s1[i] == s2[j])
				{
					write (1, &s1[i], 1);
					break;
				}
				else
					j++;
			}
			i++;
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
	ft_inter(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}