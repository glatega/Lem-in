/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_room.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:19:03 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:24:18 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		is_room(char *str)
{
	char	**split;
	int		i;

	if (str[0] == '#')
		return (0);
	split = ft_strsplit(str, ' ');
	if (split[0][0] == 'L' || split[0][0] == '#')
	{
		free_array(&split);
		return (0);
	}
	i = 0;
	while (split[i] && ++i)
		;
	if (i >= 3)
		if (!valid_int(split[1]) || !valid_int(split[2]))
		{
			free_array(&split);
			return (0);
		}
	free_array(&split);
	if (i == 3)
		return (1);
	return (0);
}
