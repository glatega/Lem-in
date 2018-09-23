/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_path_to_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:43:18 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:43:24 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	add_path_to_set(char ****pathset, char **path)
{
	char	***set;
	char	***new;
	int		i;

	set = *pathset;
	i = 0;
	if (set)
		while (set[i])
			i++;
	new = (char***)ft_memalloc(sizeof(char**) * (i + 2));
	new[i] = path;
	while (i)
	{
		i--;
		new[i] = set[i];
	}
	free(*pathset);
	*pathset = new;
}
