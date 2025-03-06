/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpalchet <bpalchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:33:42 by bpalchet          #+#    #+#             */
/*   Updated: 2025/03/06 17:43:14 by bpalchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_FOREACH_H
# define FT_LIST_FOREACH_H

#include <stddef.h>

typedef struct s_list
{
	struct s_list *next;
	void	*data;
}	t_list;

#endif
