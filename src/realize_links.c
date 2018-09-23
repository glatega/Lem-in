/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realize_links.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:39:31 by glatega           #+#    #+#             */
/*   Updated: 2018/09/18 19:39:37 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	realize_links(t_lem *lem, t_llstr *input)
{
	int		i;

	i = 0;
	while ((lem->rooms)[i])
	{
		create_room_links((lem->rooms)[i], lem->rooms, input);
		i++;
	}
}
