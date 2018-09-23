/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_path_to_room_sequence.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:30:17 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:30:23 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	convert_path_to_room_sequence(t_lem *lem)
{
	t_room	***r_paths;
	char	**path;
	int		len;
	int		i;
	int		j;

	r_paths = (t_room***)ft_memalloc(sizeof(t_room**) * (lem->vip + 1));
	i = 0;
	while (i < lem->vip)
	{
		path = (lem->paths->paths)[i];
		len = ft_arrlen(path);
		r_paths[i] = (t_room**)ft_memalloc(sizeof(t_room*) * (len + 1));
		j = 0;
		while (j < len)
		{
			r_paths[i][j] = room_by_name(lem->rooms, path[j]);
			j++;
		}
		i++;
	}
	lem->path_rooms = r_paths;
}
