/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_room_by_name.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:37:52 by glatega           #+#    #+#             */
/*   Updated: 2018/09/18 19:37:58 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*get_room_by_name(t_room **rooms, char *name)
{
	int		i;

	i = 0;
	while (rooms[i])
	{
		if (!ft_strcmp(name, (rooms[i])->name))
			return (rooms[i]);
		i++;
	}
	return (NULL);
}
