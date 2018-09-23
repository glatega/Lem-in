/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:35:07 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:18:33 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	free_input(t_llstr *input)
{
	t_llstr		*prev;

	while (input)
	{
		free(input->str);
		prev = input;
		input = input->next;
		free(prev);
	}
}
