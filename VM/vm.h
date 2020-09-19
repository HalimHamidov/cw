//
// Created by Akihiko Pearl on 9/5/20.
//

#ifndef VM_VM_H
#define VM_VM_H

# include "../libft/libft.h"
# include "op.h"
# include "stdio.h"
# include "limits.h"

#define RED "\x1b[31m"
#define RESET "\x1b[0m"

typedef struct 	s_player
{
	char	name[PROG_NAME_LENGTH + 1];
	char 	comment[COMMENT_LENGTH + 1];
	char 	inst[CHAMP_MAX_SIZE + 1];
	int		len;
	int 	cursor_amount;
	int 	index_start;
	char	string[CHAMP_MAX_SIZE + 1];
	int 	inst_len;
	int 	reg[REG_NUMBER];
}				t_player;

typedef struct s_cursor {
	struct	s_cursor *next;
	int 	carry;
	int		player;
	int 	id;
	int 	index;
	int 	cycle;
	int 	pause;
}				t_cursor;

typedef struct 	s_env
{
	t_player 	*player;
	t_cursor	*head;
	char 		**strings;
	char 		arena[MEM_SIZE];
	int 		player_amount;
	char 		**files;
	t_op		op_tab[17];
}				t_env;

void 		ft_print_function(int index, t_env *e);
void 		ft_live(t_env *e);
void 		ft_ld(t_env *e);
void 		ft_st(t_env *e);
void 		ft_add(t_env *e);
void 		ft_sub(t_env *e);
void 		ft_and(t_env *e);
void 		ft_or(t_env *e);
void 		ft_xor(t_env *e);
void 		ft_zjmp(t_env *e);
void 		ft_ldi(t_env *e);
void 		ft_sti(t_env *e);
void 		ft_fork(t_env *e);
void 		ft_lld(t_env *e);
void 		ft_lldi(t_env *e);
void 		ft_lfork(t_env *e);
void 		ft_aff(t_env *e);
void 		ft_move_cursors(t_env *e);
void 		ft_print_cursor(t_env *e);
t_cursor	*ft_create_cursor(int i, t_env *e);
t_cursor	*ft_add_cursor_to_stack(t_cursor *stack, int i, t_env *e);
void		ft_init_cursor(t_env *e);
void		init_e(t_env *e, int argc, char **argv);
void		ft_files_to_string(t_env *e);
void 		ft_exit(t_env *e);
void 		ft_print_strings(t_env *e, int argc);
void 		ft_parsing(t_env *e, int argc);
void 		ft_build_vm(t_env *e, int argc);
void 		ft_print_hexa(char *str, int len);
void 		set_op_tab(t_env *e);
void 		ft_check_args(t_env, int opcode, int acb);

#endif //VM_VM_H
