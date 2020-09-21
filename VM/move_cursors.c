//
// Created by Akihiko Pearl on 9/14/20.
//

#include "vm.h"

void ft_new_cycle(t_env *e, int *end) {
	if (e->lives == 0)
		end = 0;
	if (e->lives < NBR_LIVE)
		e->check += 1;
	if (e->check == MAX_CHECKS)
	{
		e->cycles_to_die -= CYCLE_DELTA;
		e->lives = 0;
	}
	else
	{
		e->check = 0;
		e->lives = 0;
	}
}

void 	ft_move_cursors(t_env *e)
{
	int i;
	int end;
	t_cursor *cursor;

	end = 1;
	cursor = e->head;
	i = 0;
	while(end)
	{
		if (cursor->counter)
		{
			if(e->cycle == e->cycles_to_die)
				ft_new_cycle(e, &end);
			else
				e->cycle += 1;
			cursor = cursor->next;
		}
		else {
			if (!cursor->running)
			{
				cursor->comnd_len = 4;
				cursor->index += 1;
				e->lives += 1;
			}
			else
				{
				if (cursor->cycle == 0)
				{
					cursor->running = 0;
					cursor->index += cursor->comnd_len;
				}
				else
					cursor->cycle -= 1;
				}
			cursor->index += cursor->index % MEM_SIZE;
			cursor = cursor->next;
			i++;
		}
	}
}
