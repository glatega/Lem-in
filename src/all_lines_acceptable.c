/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_lines_acceptable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:23:22 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:47:27 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		all_lines_acceptable(t_llstr *input)
{
	char	*line;

	input = input->next;
	while (input)
	{
		line = input->str;
		if (!is_link(line) && !is_room(line))
		{
			if (line[0] != '#')
			{
				ft_putendl(RED "\aERROR: Incorrect format" RESET);
				return (0);
			}
		}
		input = input->next;
	}
	return (1);
}
