/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_room_links.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:38:47 by glatega           #+#    #+#             */
/*   Updated: 2018/09/18 19:38:54 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	create_room_links(t_room *room, t_room **rooms, t_llstr *input)
{
	char	**split;

	while (input)
	{
		if (is_link(input->str))
		{
			split = ft_strsplit(input->str, '-');
			if (!ft_strcmp(room->name, split[0]))
				add_link_to_room(room, get_room_by_name(rooms, split[1]));
			else if (!ft_strcmp(room->name, split[1]))
				add_link_to_room(room, get_room_by_name(rooms, split[0]));
			free_array(&split);
		}
		input = input->next;
	}
}
