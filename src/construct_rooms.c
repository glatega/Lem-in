/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct_rooms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 22:43:56 by glatega           #+#    #+#             */
/*   Updated: 2018/09/18 20:57:05 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	construct_rooms(t_lem *lem, t_llstr *input)
{
	int			i;
	t_room		**rooms;
	t_llstr		*start;

	i = 0;
	rooms = (t_room**)ft_memalloc(sizeof(t_room*) * (room_count(input) + 1));
	start = input;
	while (input)
	{
		if (is_room(input->str))
			rooms[i++] = new_room(input->str);
		input = input->next;
	}
	lem->rooms = rooms;
	lem->start = start_room(lem, start);
	lem->end = end_room(lem, start);
}
