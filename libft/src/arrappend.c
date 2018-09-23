/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrappend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:17:25 by glatega           #+#    #+#             */
/*   Updated: 2018/09/21 23:40:44 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**arrappend(char ***array, char *string)
{
	char	**old;
	char	**new;
	int		i;

	old = *array;
	i = 0;
	while (old[i])
		i++;
	new = (char**)ft_memalloc(sizeof(char*) * (i + 2));
	new[i + 1] = NULL;
	new[i] = ft_strnew(ft_strlen(string));
	new[i] = ft_strcpy(new[i], string);
	while (i--)
		new[i] = old[i];
	free(*array);
	return (new);
}
