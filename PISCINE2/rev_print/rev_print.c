#include <unistd.h>

int ft_strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

void ft_rev_print(char *s)
{
	int i, len = 0;

	len = ft_strlen(s);
	i = len - 1;
	while ( i >= 0)
	{
		write (1, &s[i], 1);
		i--;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_rev_print(argv[1]);
	write (1, "\n", 1);
	return (0);
}