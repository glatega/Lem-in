/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_link.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:20:02 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 16:05:25 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		valid_link(char *link1, char *link2, t_llstr *input)
{
	char		**rooms;
	t_llstr		*start;
	int			l1;
	int			l2;

	l1 = 0;
	l2 = 0;
	start = input;
	while (input)
	{
		if (is_room(input->str))
		{
			rooms = ft_strsplit(input->str, ' ');
			if (!ft_strcmp(rooms[0], link1))
				l1 = 1;
			if (!ft_strcmp(rooms[0], link2))
				l2 = 1;
			free_array(&rooms);
		}
		input = input->next;
	}
	if (l1 == 1 && l2 == 1)
		return (1);
	return (0);
}
