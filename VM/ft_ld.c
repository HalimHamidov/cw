//
// Created by Akihiko Pearl on 9/21/20.
//

#include "vm.h"

void 	ft_ld(char[30] copied_code, t_env *e, t_cursor *cursor)
{
	char acb;

	acb = copied_code[1];
	if ((acb >>6) == DIR_CODE)
	{
		cursor->reg[copied_code[2 + 4]] = (int*)(copied_code + 2);
		cursor->index += 6;
	}
	else
	{
		cursor->reg[copied_code[2 + 2]] = ((int*)(copied_code + 2) >> 8);
		cursor->index += 4;
	}
	cursor->carry = 1;
}