/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:20:15 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/12 19:04:08 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_list.h"
// #include <stdio.h>
// #include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

/* void free_list(t_list *head)
{
    t_list *temp;
    
    while (head)
    {
        temp = head;        // Salva il nodo corrente
        head = head->next;  // Passa al nodo successivo
        free(temp);         // Libera il nodo corrente
    }
} */

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

/* t_list	*ft_new_node(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
} */

/* int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*fourth;
	t_list	*solo;

	first = ft_new_node("One");
	second = ft_new_node("Two");
	third = ft_new_node((void *)3);
	fourth = ft_new_node("Four");
	solo = ft_new_node("Solo");
	first->next = second;
	second->next = third;
	third->next = fourth;
	printf("%d\n", ft_list_size(first));
	printf("%d\n", ft_list_size(second));
	printf("%d\n", ft_list_size(third));
	printf("%d\n", ft_list_size(solo));
	printf("%d\n", ft_list_size(NULL));
	printf("%d\n", ft_list_size(fourth));
	free_list(first);
	free_list(solo);
	return (0);
} */
