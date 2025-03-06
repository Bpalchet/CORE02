/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:05:25 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/06 22:54:37 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

// Conta il numero di parole nella stringa
int ft_count_words (char *str)
{
	int i = 0, flag = 0, count = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			flag = 0;
			i++;
		}
		else if (flag == 0)
		{
			count++;
			flag = 1;
			i++;
		}
		else if (flag == 1)
			i++;
	}
	return (count);
}

// Copia una parola dalla stringa originale
char *copy_word(const char *start, int length)
{
    char *word = (char *)malloc(length + 1);
    if (!word)
        return NULL;
    
    for (int i = 0; i < length; i++)
        word[i] = start[i];

    word[length] = '\0'; // Terminatore di stringa
    return word;
}

// Divide la stringa in un array di parole
char **ft_split(char *str)
{
    int word_count = ft_count_words(str);
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!words)
        return NULL;
    int i = 0, length = 0;
    const char *start = NULL;
    while (*str)
    {
        if (*str != ' ' && start == NULL)
            start = str; // Inizio della parola
        if ((*str == ' ' || *(str + 1) == '\0') && start != NULL)
        {
            length = (*str == ' ') ? (str - start) : (str - start + 1);
            words[i] = copy_word(start, length);
            if (!words[i])
            {
                while (i > 0)
                    free(words[--i]);
                free(words);
                return NULL;
            }
            i++;
            start = NULL;
        }
        str++;
    }
    words[i] = NULL; // Terminatore dell'array
    return (words);
}

// Libera la memoria dell'array di parole
void free_words(char **words)
{
    int i = 0;
    while (words[i])
        free(words[i++]);
    free(words);
}

int main(void)
{
    char str[] = "Ciao come stai oggi?";
    printf("Stringa originale: \"%s\"\n", str);

    char **words = ft_split(str);
    if (!words)
    {
        printf("Errore di allocazione memoria.\n");
        return 1;
    }

    printf("Parole suddivise:\n");
    for (int i = 0; words[i]; i++)
        printf("- %s\n", words[i]);

    free_words(words);
    return 0;
}
