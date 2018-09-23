/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 22:43:07 by glatega           #+#    #+#             */
/*   Updated: 2018/09/17 22:43:13 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		room_count(t_llstr *input)
{
	int		i;

	i = 0;
	while (input)
	{
		if (is_room(input->str))
			i++;
		input = input->next;
	}
	return (i);
}
