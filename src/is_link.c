/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:18:33 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:22:10 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		is_link(char *str)
{
	char	**split;
	int		i;

	if (str[0] == '#')
		return (0);
	split = ft_strsplit(str, '-');
	i = 0;
	while (split[i] && ++i)
		;
	free_array(&split);
	if (i == 2)
		return (1);
	return (0);
}
