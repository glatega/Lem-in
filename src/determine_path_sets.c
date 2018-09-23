/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_path_sets.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:48:04 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:48:10 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	determine_path_sets(t_lem *lem)
{
	int		i;

	i = 0;
	while ((lem->paths->paths)[i])
		i++;
	lem->paths->pathsets = (char****)ft_memalloc(sizeof(char***) * (i + 1));
	i = 0;
	while ((lem->paths->paths)[i])
	{
		build_set(lem->paths, i, i, lem->start->name);
		i++;
	}
}
