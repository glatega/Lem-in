/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:22:48 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:47:18 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		valid_order(t_llstr *input)
{
	while (input && !is_link(input->str))
		input = input->next;
	if (!input)
	{
		ft_putendl(RED "\aERROR: No links between rooms" RESET);
		return (0);
	}
	while (input)
	{
		if (!is_link(input->str))
			if ((input->str)[0] != '#')
			{
				ft_putendl(RED "\aERROR: Incorrect format" RESET);
				return (0);
			}
		input = input->next;
	}
	return (1);
}
