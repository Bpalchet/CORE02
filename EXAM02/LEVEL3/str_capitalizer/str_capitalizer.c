/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:30:16 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/10 19:44:15 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void r_capitalizer(char *s)
{
    int i = 0;
    while (s[i])
    {
         // If the character is uppercase, make it lowercase
         if (s[i] >= 'A' && s[i] <= 'Z')
             s[i] += 32;
         // Now check for lowercase character and if the next char
         // is a space character, make it uppercase again
         if ((s[i] >= 'a' && s[i] <= 'z') && ft_isspace(s[i - 1]))
             s[i] -= 32;
         // Now print every char
         ft_putchar(s[i++]);
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    if (argc == 1)
        ft_putchar('\n');
    else
    {
        while (i < argc)
        {
            r_capitalizer(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
}
