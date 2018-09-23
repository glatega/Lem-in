/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:19:03 by glatega           #+#    #+#             */
/*   Updated: 2018/09/12 14:20:53 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	get_input(t_llstr **input)
{
	char		*line;
	t_llstr		*node;
	t_llstr		*start;

	start = NULL;
	while (get_next_line(0, &line) > 0)
	{
		if (!start)
		{
			start = (t_llstr*)ft_memalloc(sizeof(t_llstr));
			start->str = line;
		}
		else
		{
			node = start;
			while (node->next != NULL)
				node = node->next;
			node->next = (t_llstr*)ft_memalloc(sizeof(t_llstr));
			node->next->str = line;
		}
	}
	free(line);
	*input = start;
}
