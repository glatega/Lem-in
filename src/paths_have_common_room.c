/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths_have_common_room.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:44:24 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:44:29 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		paths_have_common_room(char **p1, char **p2, char *start)
{
	int		alpha;
	int		beta;

	alpha = 1;
	while (p1[alpha])
	{
		beta = 1;
		while (p2[beta])
		{
			if (!ft_strcmp(p1[alpha], p2[beta]))
			{
				if (ft_strcmp(start, p1[alpha]))
					return (1);
			}
			beta++;
		}
		alpha++;
	}
	return (0);
}
