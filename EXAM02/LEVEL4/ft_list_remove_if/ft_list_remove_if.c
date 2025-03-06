/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:58:57 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/06 19:01:48 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	
	while ((*begin_list == NULL) || begin_list == NULL)
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
}
/* 
t_list *create_node(void *data)
{
    t_list *new = malloc(sizeof(t_list));
    if (!new)
        return NULL;
    new->data = data;
    new->next = NULL;
    return new;
}

void print_list(t_list *head)
{
    while (head)
    {
        printf("%s -> ", (char *)head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int cmp(void *a, void *b)
{
    return strcmp((char *)a, (char *)b);
}

void free_list(t_list *head)
{
    t_list *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    t_list *head = create_node("apple");
    head->next = create_node("banana");
    head->next->next = create_node("apple");
    head->next->next->next = create_node("cherry");
	head->next->next->next->next= create_node("banana");

    printf("Lista prima della rimozione:\n");
    print_list(head);

    char *data_ref = "apple";
    ft_list_remove_if(&head, data_ref, cmp);

    printf("Lista dopo la rimozione di '%s':\n", data_ref);
    print_list(head);

    free_list(head);
    
    return 0;
} */