#include <unistd.h>

void ft_ulstr(char *s)
{
	int i = 0;
	char letter;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			letter = s[i] - 32;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			letter = s[i] + 32;
		else
			letter = s[i];
		write (1, &letter, 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_ulstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}