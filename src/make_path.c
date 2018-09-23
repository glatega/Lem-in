/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:41:29 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:41:40 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	make_path(t_lem *lem, t_room *room, t_paths *paths)
{
	int		i;
	t_room	*link;

	if (room == lem->start)
		save_path(paths);
	else
	{
		i = 0;
		while ((room->links)[i])
		{
			link = (room->links)[i];
			if (unique_room(paths->path, link->name))
			{
				paths->path = arrappend(&(paths->path), link->name);
				make_path(lem, link, paths);
			}
			i++;
		}
	}
	step_back(paths);
}
