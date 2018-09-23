/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_start_end_count.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:21:58 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:48:01 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		check_start_end_count(int start, int end)
{
	if (start == 1)
	{
		if (end == 1)
			return (1);
		ft_putendl(RED "\aERROR: Too many END rooms" RESET);
		return (0);
	}
	ft_putendl(RED "\aERROR: Too many START rooms" RESET);
	return (0);
}
