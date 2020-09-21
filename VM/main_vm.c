//
// Created by Akihiko Pearl on 9/5/20.
//
#include "vm.h"

int 	main(int argc, char **argv)
{
	t_env e;

	init_e(&e, argc, argv);
//	ft_print_strings(&e, argc);
//	ft_print_strings(&e, argc, argv);
//	printf("\n*** PARSING ***\n");
	ft_parsing(&e, argc);
//	printf("\n*** BUILD_VM ***\n");
	ft_build_vm(&e, argc);
//	ft_init_cursor(&e);
//	ft_move_cursors(&e);
//	ft_print_cursor(&e);
//	ft_check_args(e, 4, 84);// https://www.hexadecimaldictionary.com/hexadecimal/0x54/
	return (0);
}
//void	ft_check_args(t_env e, int opcode, int acb);