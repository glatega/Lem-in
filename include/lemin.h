/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:42:35 by glatega           #+#    #+#             */
/*   Updated: 2018/09/23 16:19:44 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H
# include "libft.h"

typedef struct	s_room
{
	char			*name;
	int				ant;
	struct s_room	**links;
}				t_room;

typedef struct	s_paths
{
	char			**path;
	char			***paths;
	char			****pathsets;
}				t_paths;

typedef struct	s_lem
{
	int				ants;
	t_room			*start;
	t_room			*end;
	t_room			**rooms;
	t_paths			*paths;
	int				vip;
	t_room			***path_rooms;
}				t_lem;

typedef struct	s_llstr
{
	char			*str;
	struct s_llstr	*next;
}				t_llstr;

void			add_link_to_room(t_room *room, t_room *link);

void			add_path_to_set(char ****pathset, char **path);

int				all_lines_acceptable(t_llstr *input);

void			ants_start_marching(t_lem *lem);

void			build_set(t_paths *paths, int set, int path, char *start);

int				check_start_end_count(int start, int end);

void			construct_rooms(t_lem *lem, t_llstr *input);

void			convert_path_to_room_sequence(t_lem *lem);

void			create_room_links(t_room *room, t_room **rooms, t_llstr *input);

void			determine_best_path_set(t_lem *lem);

void			determine_path_sets(t_lem *lem);

int				empty_lines(t_llstr *input);

t_room			*end_room(t_lem *lem, t_llstr *input);

void			free_input(t_llstr *input);

void			generate_possible_paths(t_lem *lem);

void			get_input(t_llstr **input);

t_room			*get_room_by_name(t_room **rooms, char *name);

int				input_errors(t_llstr *input);

int				is_link(char *str);

int				is_path_virgin(char ***set, char **path, char *start);

int				is_pathset_asc(char ***paths);

int				is_room(char *str);

int				is_self_linked(char ***link_addr);

int				links_to_room(char *name, t_llstr *input);

void			make_path(t_lem *lem, t_room *room, t_paths *paths);

t_room			*new_room(char *line);

void			output_input(t_llstr *input);

int				path_count(char ***set);

void			path_step(t_lem *lem, int p_num, int max);

int				paths_have_common_room(char **p1, char **p2, char *start);

void			print_ant_step(char *room, int ant);

void			realize_links(t_lem *lem, t_llstr *input);

t_room			*room_by_name(t_room **rooms, char *name);

int				room_count(t_llstr *input);

void			save_path(t_paths *paths);

void			setup_link_scaffolding(t_room **rooms, t_llstr *input);

int				solution_possible(char ***paths);

void			sort_paths_asc(char ***paths);

t_room			*start_room(t_lem *lem, t_llstr *input);

void			step_back(t_paths *paths);

int				total_set_rooms(char ***set);

int				unique_room(char **path, char *room);

int				valid_ants(char *str);

int				valid_end(t_llstr *input);

int				valid_link(char *link1, char *link2, t_llstr *input);

int				valid_links(t_llstr *input);

int				valid_order(t_llstr *input);

int				valid_start(t_llstr *input);

int				valid_start_end(t_llstr *input);

int				viable_path_number(char ***paths, int ants);

#endif
