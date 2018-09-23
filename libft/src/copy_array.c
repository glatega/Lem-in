/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:36:40 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:36:47 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**copy_array(char **array)
{
	char	**new;
	int		i;

	i = 0;
	while (array[i])
		i++;
	new = (char**)ft_memalloc(sizeof(char*) * (i + 1));
	while (i)
	{
		i--;
		new[i] = ft_strdup(array[i]);
	}
	return (new);
}
