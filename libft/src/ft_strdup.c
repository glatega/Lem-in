/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:28:30 by glatega           #+#    #+#             */
/*   Updated: 2018/09/11 21:17:05 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;

	dup = (char*)ft_memalloc(sizeof(char) * (int)(ft_strlen(str) + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(str))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
