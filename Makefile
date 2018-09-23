# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glatega <glatega@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/03 13:59:57 by glatega           #+#    #+#              #
#    Updated: 2018/09/23 16:33:29 by glatega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LEMIN = lem-in
CC = gcc
FLAGS = -Wall -Wextra -Werror
COMP = $(CC) $(FLAGS)
LEMIN_H = -I ./include
LIBFT_H = -I ./libft/include
LIBFT = -L./libft -lft
SRC_FOLDER = src/
OBJ_FOLDER = obj/
SRC_FILES =		add_link_to_room.c \
				add_path_to_set.c \
				all_lines_acceptable.c \
				ants_start_marching.c \
				build_set.c \
				check_start_end_count.c \
				construct_rooms.c \
				convert_path_to_room_sequence.c \
				create_room_links.c \
				determine_best_path_set.c \
				determine_path_sets.c \
				empty_lines.c \
				end_room.c \
				free_input.c \
				generate_possible_paths.c \
				get_input.c \
				get_room_by_name.c \
				input_errors.c \
				is_link.c \
				is_path_virgin.c \
				is_pathset_asc.c \
				is_room.c \
				is_self_linked.c \
				links_to_room.c \
				main.c \
				make_path.c \
				new_room.c \
				output_input.c \
				path_count.c \
				path_step.c \
				paths_have_common_room.c \
				print_ant_step.c \
				realize_links.c \
				room_by_name.c \
				room_count.c \
				save_path.c \
				setup_link_scaffolding.c \
				solution_possible.c \
				sort_paths_asc.c \
				start_room.c \
				step_back.c \
				total_set_rooms.c \
				unique_room.c \
				valid_ants.c \
				valid_end.c \
				valid_link.c \
				valid_links.c \
				valid_order.c \
				valid_start.c \
				valid_start_end.c \
				viable_path_number.c
OBJ_FILES := $(SRC_FILES:%.c=%.o)
SRC = $(addprefix $(SRC_FOLDER), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_FOLDER), $(OBJ_FILES))

all: $(LEMIN)

$(LEMIN): $(OBJ)
	make -C ./libft
	$(COMP) $(OBJ) $(LIBFT) -o $(LEMIN)

obj:
	mkdir -p $@

$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.c | obj
	$(COMP) -c $< $(LIBFT_H) $(LEMIN_H) -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(LEMIN)

re: fclean all
