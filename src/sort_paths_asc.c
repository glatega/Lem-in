/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_paths_asc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:27:09 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:27:20 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	sort_paths_asc(char ***paths)
{
	int		i;
	char	**p1;
	char	**p2;

	while (!is_pathset_asc(paths))
	{
		i = 0;
		p1 = paths[i++];
		while (paths[i])
		{
			p2 = paths[i];
			if (ft_arrlen(p1) > ft_arrlen(p2))
			{
				paths[i] = p1;
				paths[i - 1] = p2;
			}
			p1 = paths[i++];
		}
	}
}
