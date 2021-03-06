/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_room.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 22:44:23 by glatega           #+#    #+#             */
/*   Updated: 2018/09/17 22:44:29 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*start_room(t_lem *lem, t_llstr *input)
{
	char	**split;
	int		i;

	while (ft_strcmp("##start", input->str))
		input = input->next;
	input = input->next;
	split = ft_strsplit(input->str, ' ');
	i = 0;
	while ((lem->rooms)[i])
	{
		if (!ft_strcmp(((lem->rooms)[i])->name, split[0]))
		{
			free_array(&split);
			return ((lem->rooms)[i]);
		}
		i++;
	}
	free_array(&split);
	return (NULL);
}
