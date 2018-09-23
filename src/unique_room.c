/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:38:42 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:38:48 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		unique_room(char **path, char *room)
{
	int		i;

	i = 0;
	while (path[i])
	{
		if (!ft_strcmp(room, path[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
