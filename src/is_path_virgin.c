/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_path_virgin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:45:12 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:45:18 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		is_path_virgin(char ***set, char **path, char *start)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == path)
			return (0);
		if (paths_have_common_room(set[i], path, start))
			return (0);
		i++;
	}
	return (1);
}
