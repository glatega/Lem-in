/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 15:01:14 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:14:30 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n' && flag == 0)
		{
			i++;
			flag = 1;
		}
		if (*str == ' ' || *str == '\t' || *str == '\n')
			flag = 0;
		str++;
	}
	return (i);
}
