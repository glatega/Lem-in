/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:19:38 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:47:52 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		valid_ants(char *str)
{
	int		num;

	if (valid_int(str))
	{
		num = ft_atoi(str);
		if (num > 0)
			return (1);
		if (num < 0)
			ft_putendl(RED "\aERROR: Ants are too sad" RESET);
		if (num == 0)
			ft_putendl(RED "\aERROR 404: Ants not found" RESET);
	}
	else
		ft_putendl(RED "\aERROR: Invalid ants" RESET);
	return (0);
}
