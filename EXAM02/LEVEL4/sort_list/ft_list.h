/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:18:48 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/09 17:29:24 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h> // NULL || (void *)0

typedef struct s_list
{
	struct s_list	*next;
	int			data;
}	t_list;

#endif