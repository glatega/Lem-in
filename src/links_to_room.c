/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   links_to_room.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:36:49 by glatega           #+#    #+#             */
/*   Updated: 2018/09/18 19:36:55 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		links_to_room(char *name, t_llstr *input)
{
	char	**split;
	int		i;

	i = 0;
	while (input)
	{
		if (is_link(input->str))
		{
			split = ft_strsplit(input->str, '-');
			if (!ft_strcmp(name, split[0]) || !ft_strcmp(name, split[1]))
				i++;
			free_array(&split);
		}
		input = input->next;
	}
	return (i);
}
