/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:00:02 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/10 23:25:27 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stddef.h>
//#include <stdlib.h>
//#include <unistd.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

/*#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int	ascending(int a, int b)
{
	return (a <= b);
}

int	descending(int a, int b)
{
	return (a >= b);
}

t_list	*ft_new_elem(int data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_list_foreach_space(t_list *begin_list, void (*f)(int))
{
	while (begin_list != NULL)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		ft_putchar(' ');
		begin_list = begin_list->next;
	}
}

int	main(void)
{
	t_list	*test_list;

	test_list = ft_new_elem(42);
	test_list->next = ft_new_elem(666);
	test_list->next->next = ft_new_elem(69);
	test_list->next->next->next = ft_new_elem(420);
	test_list->next->next->next->next = ft_new_elem(669);
	test_list->next->next->next->next->next = ft_new_elem(42);
	test_list->next->next->next->next->next->next = ft_new_elem(0);
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	//sort_list(test_list, ascending);
	sort_list(test_list, descending);	
	ft_putchar('\n');
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	ft_putchar('\n');
	return (0);
} */

