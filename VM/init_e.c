//
// Created by Akihiko Pearl on 9/10/20.
//

#include "vm.h"

void init_e(t_env *e, int argc, char **argv)
{
	e->player_amount = argc;
	e->files = argv;
	e->cycle = 0;
	e->lives = 0;
	e->check = 0;
	e->cycles_to_die = CYCLE_TO_DIE;
	e->player = malloc(sizeof(t_player) * argc);
	ft_bzero(e->arena, (MEM_SIZE));
	ft_files_to_string(e);
	set_op_tab(e);
}
