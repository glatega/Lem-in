/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_end.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:21:08 by glatega           #+#    #+#             */
/*   Updated: 2018/09/17 21:21:14 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		valid_end(t_llstr *input)
{
	while (input)
	{
		if (!ft_strcmp(input->str, "##end"))
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
