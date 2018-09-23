/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_self_linked.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:20:26 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 15:48:11 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		is_self_linked(char ***link_addr)
{
	char	**links;

	links = *link_addr;
	if (!ft_strcmp(links[0], links[1]))
	{
		free_array(link_addr);
		ft_putstr(RED "\aERROR: A room seems to connect " RESET);
		ft_putendl(RED "directly to itself... Impossible!" RESET);
		return (1);
	}
	return (0);
}
