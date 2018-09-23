/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:03:27 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 16:20:02 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		main(void)
{
	t_llstr		*input;
	t_lem		lem;

	get_input(&input);
	if (input_errors(input))
		free_input(input);
	else
	{
		lem.ants = ft_atoi(input->str);
		construct_rooms(&lem, input);
		setup_link_scaffolding(lem.rooms, input);
		realize_links(&lem, input);
		generate_possible_paths(&lem);
		if (solution_possible(lem.paths->paths))
		{
			determine_path_sets(&lem);
			determine_best_path_set(&lem);
			sort_paths_asc(lem.paths->paths);
			lem.vip = viable_path_number(lem.paths->paths, lem.ants);
			convert_path_to_room_sequence(&lem);
			output_input(input);
			ants_start_marching(&lem);
		}
	}
	return (0);
}
