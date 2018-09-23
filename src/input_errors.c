/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:34:42 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 16:11:45 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		input_errors(t_llstr *input)
{
	if (empty_lines(input))
		return (1);
	if (!valid_ants(input->str))
		return (1);
	if (!valid_start_end(input))
		return (1);
	if (!valid_links(input))
		return (1);
	if (!valid_order(input))
		return (1);
	if (!all_lines_acceptable(input))
		return (1);
	return (0);
}
