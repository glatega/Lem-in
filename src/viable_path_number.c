/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viable_path_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:27:49 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:27:57 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		viable_path_number(char ***paths, int ants)
{
	int		rounds;
	int		min;
	int		total;
	int		i;

	min = ft_arrlen(paths[0]) + ants - 2;
	total = 1;
	i = 1;
	while (paths[i])
	{
		rounds = ft_arrlen(paths[i]) + (ants / (i + 1)) - 2;
		if (rounds < min)
		{
			min = rounds;
			total = i + 1;
		}
		i++;
	}
	return (total);
}
