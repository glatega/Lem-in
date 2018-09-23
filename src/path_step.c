/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_step.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:28:39 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:28:45 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	path_step(t_lem *lem, int p_num, int max)
{
	t_room	*start;
	t_room	**path;
	int		i;

	start = lem->start;
	path = (lem->path_rooms)[p_num];
	i = 1;
	while (path[i])
	{
		if (!ft_strcmp((path[i])->name, start->name) && lem->ants)
		{
			(lem->ants)--;
			start->ant = max - lem->ants;
		}
		if ((path[i])->ant)
		{
			print_ant_step((path[i - 1])->name, (path[i])->ant);
			if (i == 1)
				(lem->end->ant)++;
			else
				(path[i - 1])->ant = (path[i])->ant;
			(path[i])->ant = 0;
		}
		i++;
	}
}
