/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_possible_paths.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:42:37 by glatega           #+#    #+#             */
/*   Updated: 2018/09/22 00:14:51 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	generate_possible_paths(t_lem *lem)
{
	t_paths		*paths;
	int			i;
	t_room		*room;

	paths = (t_paths*)ft_memalloc(sizeof(t_paths));
	paths->path = (char**)ft_memalloc(sizeof(char*));
	paths->paths = (char***)ft_memalloc(sizeof(char**));
	paths->path = arrappend(&(paths->path), lem->end->name);
	i = 0;
	while ((lem->end->links)[i])
	{
		room = (lem->end->links)[i];
		paths->path = arrappend(&(paths->path), room->name);
		make_path(lem, room, paths);
		i++;
	}
	step_back(paths);
	free(paths->path);
	paths->path = NULL;
	lem->paths = paths;
}
