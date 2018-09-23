/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:26:59 by glatega           #+#    #+#             */
/*   Updated: 2018/09/17 21:27:07 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_array(char ***stack)
{
	char	**array;

	array = *stack;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(*stack);
}
