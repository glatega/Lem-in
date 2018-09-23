/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:47:20 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:47:26 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	build_set(t_paths *paths, int set, int path, char *start)
{
	int		i;

	i = 0;
	add_path_to_set((&(paths->pathsets)[set]), (paths->paths)[path]);
	while ((paths->paths)[i])
	{
		if (is_path_virgin((paths->pathsets)[set], (paths->paths)[i], start))
			build_set(paths, set, i, start);
		i++;
	}
}
