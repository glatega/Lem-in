/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:11:29 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 16:11:35 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		empty_lines(t_llstr *input)
{
	while (input)
	{
		if (ft_strlen(input->str) == 0)
		{
			ft_putendl(RED "\aERROR: Empty line detected" RESET);
			return (1);
		}
		input = input->next;
	}
	return (0);
}
