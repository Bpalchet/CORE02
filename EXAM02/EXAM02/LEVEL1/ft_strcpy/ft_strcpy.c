/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:47:53 by bpalchet          #+#    #+#             */
/*   Updated: 2025/01/25 17:13:56 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*int	main(void)
{
	char	*s2 = NULL;
	char	*s1;
	char	*str;
	int	len = 0;

	len = strlen (s2);
	s1 = (char *)malloc((len + 1) * sizeof(char)); 
	str = ft_strcpy (s1, s2);
	printf ("Stringa copiata con FT_STRCPY = %s\n", str);
	str = strcpy (s1, s2);
	printf ("Stringa copiata con STRCPY = %s\n", str);
	free (s1);
	return (0);
}*/