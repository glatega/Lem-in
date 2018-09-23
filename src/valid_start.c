/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:21:31 by glatega           #+#    #+#             */
/*   Updated: 2018/09/17 21:21:36 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		valid_start(t_llstr *input)
{
	while (input)
	{
		if (!ft_strcmp(input->str, "##start"))
			if (input->next != NULL)
			{
				input = input->next;
				if (is_room(input->str))
					return (1);
			}
		input = input->next;
	}
	return (0);
}
