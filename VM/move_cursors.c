//
// Created by Akihiko Pearl on 9/14/20.
//

#include "vm.h"

void 	ft_move_cursors(t_env *e)
{
	int i;
	t_cursor *temp;

	temp = e->head;
	i = 0;
	while(i < MEM_SIZE)
	{
		temp->index += 1;
		if(temp->index == MEM_SIZE + 1)
			temp->index = 0;
		ft_print_function(temp->index, e);
		temp = temp->next;
		i++;
	}
}