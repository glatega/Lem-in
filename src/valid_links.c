/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_links.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:20:47 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:47:36 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		valid_links(t_llstr *input)
{
	char		**links;
	t_llstr		*start;

	start = input;
	while (input)
	{
		if (is_link(input->str))
		{
			links = ft_strsplit(input->str, '-');
			if (is_self_linked(&links))
				return (0);
			if (!valid_link(links[0], links[1], start))
			{
				free_array(&links);
				ft_putendl(RED "\aERROR: Impossible link" RESET);
				return (0);
			}
			free_array(&links);
		}
		input = input->next;
	}
	return (1);
}
