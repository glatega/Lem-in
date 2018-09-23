/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_link_scaffolding.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:37:22 by glatega           #+#    #+#             */
/*   Updated: 2018/09/18 19:37:28 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	setup_link_scaffolding(t_room **rooms, t_llstr *input)
{
	int		i;
	int		links;
	t_room	*room;

	i = 0;
	while (rooms[i])
	{
		room = rooms[i];
		links = links_to_room(room->name, input);
		room->links = (t_room**)ft_memalloc(sizeof(t_room*) * (links + 1));
		i++;
	}
}
