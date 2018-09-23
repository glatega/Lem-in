/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link_to_room.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:38:19 by glatega           #+#    #+#             */
/*   Updated: 2018/09/18 19:38:25 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	add_link_to_room(t_room *room, t_room *link)
{
	int		i;

	i = 0;
	while ((room->links)[i])
		i++;
	(room->links)[i] = link;
}
