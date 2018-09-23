/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_possible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:19:10 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 16:19:17 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		solution_possible(char ***paths)
{
	if (paths)
	{
		if (paths[0])
			return (1);
	}
	ft_putendl(RED "\aERROR: No possible solution exists" RESET);
	return (0);
}
