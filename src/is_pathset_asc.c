/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pathset_asc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:26:36 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:26:44 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		is_pathset_asc(char ***paths)
{
	int		i;
	char	**p1;
	char	**p2;

	i = 0;
	p1 = paths[i++];
	while (paths[i])
	{
		p2 = paths[i];
		if (ft_arrlen(p1) > ft_arrlen(p2))
			return (0);
		p1 = paths[i++];
	}
	return (1);
}
