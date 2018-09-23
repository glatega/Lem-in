/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 22:43:30 by glatega           #+#    #+#             */
/*   Updated: 2018/09/17 22:43:37 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*new_room(char *line)
{
	t_room	*room;
	char	**split;

	room = (t_room*)ft_memalloc(sizeof(t_room));
	split = ft_strsplit(line, ' ');
	room->name = ft_strdup(split[0]);
	free_array(&split);
	return (room);
}
