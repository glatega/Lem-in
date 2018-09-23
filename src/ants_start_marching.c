/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants_start_marching.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:29:17 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:29:25 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ants_start_marching(t_lem *lem)
{
	int		i;
	int		max;

	max = lem->ants;
	while (lem->end->ant < max)
	{
		i = 0;
		while (i < lem->vip)
		{
			path_step(lem, i, max);
			i++;
		}
		ft_putchar('\n');
	}
}
