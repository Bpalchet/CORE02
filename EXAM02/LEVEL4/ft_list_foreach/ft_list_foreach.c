/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:31:40 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/06 17:55:26 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_foreach.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		if (begin_list ->data)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
//		Main Test

/* #include <unistd.h> // For write // For write
#include <stdlib.h> // For malloc

void ft_free_nodes(t_list *begin_list)
{
    t_list *temp;
    
    while (begin_list)
    {
        temp = begin_list;        // Salva il nodo corrente
        begin_list = begin_list->next;  // Passa al nodo successivo
        free(temp);         // Libera il nodo corrente
    }
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_list	*ft_new_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list	*test_list;

	test_list = ft_new_elem("Follow ");
	test_list->next = ft_new_elem("the ");
	test_list->next->next = ft_new_elem("white ");
	test_list->next->next->next = ft_new_elem("rabbit ");
	test_list->next->next->next->next = ft_new_elem(".");
	ft_list_foreach(test_list, (void *)ft_putstr);
	ft_putstr("\n");
	ft_free_nodes(test_list);
	return (0);
} */
//loop or tab iteration or as you want

