//
// Created by Akihiko Pearl on 9/19/20.
//

#include "vm.h"

void 		ft_live(t_env *e, t_cursor *cursor)
{
	(void)e;
	cursor->cycle = 10;
	cursor->running = 1;
	cursor->comnd_len = 4;
}

void 		ft_ld(t_env *e, t_cursor *cursor)
{
	printf("ld\n");
	(void)e;
	(void)cursor;
}

void 		ft_st(t_env *e, t_cursor *cursor)
{
	printf("st\n");
	(void)e;
	(void)cursor;
}

void 		ft_add(t_env *e, t_cursor *cursor)
{
	printf("add\n");
	(void)e;
	(void)cursor;
}

void 		ft_sub(t_env *e, t_cursor *cursor)
{
	printf("ft_sub\n");
	(void)e;
	(void)cursor;
}

void 		ft_and(t_env *e, t_cursor *cursor)
{
	printf("and\n");
	(void)e;
	(void)cursor;
}

void 		ft_or(t_env *e, t_cursor *cursor)
{
	printf("or\n");
	(void)e;
	(void)cursor;
}

void 		ft_xor(t_env *e, t_cursor *cursor)
{
	printf("xor\n");
	(void)e;
	(void)cursor;
}

void 		ft_zjmp(t_env *e, t_cursor *cursor)
{
	printf("zjmp\n");
	(void)e;
	(void)cursor;
}

void 		ft_ldi(t_env *e, t_cursor *cursor)
{
	printf("live\n");
	(void)e;
	(void)cursor;
}

void 		ft_sti(t_env *e, t_cursor *cursor)
{
	printf("live\n");
	(void)e;
	(void)cursor;
}

void 		ft_fork(t_env *e, t_cursor *cursor)
{
	printf("live\n");
	(void)e;
	(void)cursor;
}

void 		ft_lld(t_env *e, t_cursor *cursor)
{
	printf("lld\n");
	(void)e;
	(void)cursor;
}

void 		ft_lldi(t_env *e, t_cursor *cursor)
{
	printf("lldi\n");
	(void)e;
	(void)cursor;
}

void 		ft_lfork(t_env *e, t_cursor *cursor)
{
	printf("lfork\n");
	(void)e;
	(void)cursor;
}

void 		ft_aff(t_env *e, t_cursor *cursor)
{
	printf("aff\n");
	(void)e;
	(void)cursor;
}
