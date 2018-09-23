/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_start_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:22:24 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:48:21 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		valid_start_end(t_llstr *input)
{
	int		start;
	int		end;

	start = 0;
	end = 0;
	if (valid_start(input))
	{
		if (valid_end(input))
		{
			while (input)
			{
				if (!ft_strcmp(input->str, "##start"))
					start++;
				if (!ft_strcmp(input->str, "##end"))
					end++;
				input = input->next;
			}
			return (check_start_end_count(start, end));
		}
		ft_putendl(RED "\aERROR: Incorrect ##end format" RESET);
		return (0);
	}
	ft_putendl(RED "\aERROR: Incorrect ##start format" RESET);
	return (0);
}
