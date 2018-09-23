/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_set_rooms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 00:56:15 by glatega           #+#    #+#             */
/*   Updated: 2018/09/22 00:56:20 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		total_set_rooms(char ***set)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (set[i])
	{
		len += ft_arrlen(set[i]);
		i++;
	}
	return (len);
}
