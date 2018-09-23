/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:19:58 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 13:08:57 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	output_input(t_llstr *input)
{
	while (input)
	{
		ft_putendl(input->str);
		input = input->next;
	}
	ft_putchar('\n');
}
