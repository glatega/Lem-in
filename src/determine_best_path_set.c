/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_best_path_set.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 00:56:51 by glatega           #+#    #+#             */
/*   Updated: 2018/09/22 00:56:59 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	determine_best_path_set(t_lem *lem)
{
	int		i;
	char	***set;

	free(lem->paths->paths);
	lem->paths->paths = *(lem->paths->pathsets);
	i = 0;
	while ((lem->paths->pathsets)[i])
	{
		set = (lem->paths->pathsets)[i];
		if (path_count(set) > path_count(lem->paths->paths))
			lem->paths->paths = set;
		else if (path_count(set) == path_count(lem->paths->paths))
		{
			if (total_set_rooms(set) < total_set_rooms(lem->paths->paths))
				lem->paths->paths = set;
		}
		i++;
	}
}
