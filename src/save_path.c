/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:37:50 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:37:56 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	save_path(t_paths *paths)
{
	int		i;
	char	***new;

	i = 0;
	while ((paths->paths)[i])
		i++;
	new = (char***)ft_memalloc(sizeof(char**) * (i + 2));
	new[i] = copy_array(paths->path);
	while (i)
	{
		i--;
		new[i] = (paths->paths)[i];
	}
	free(paths->paths);
	paths->paths = new;
}
