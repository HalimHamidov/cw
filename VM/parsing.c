//
// Created by Akihiko Pearl on 9/12/20.
//

#include "vm.h"

void ft_parsing(t_env *e, int argc)
{
	int i;
	int k;
	int hex;
	char *str;
	char *inst;

	i = 1;
	while(i < argc)
	{
		k = PROG_NAME_LENGTH + COMMENT_LENGTH;
		str = e->player[i].string;
		inst = e->player[i].inst;
		while (!(str[k]))
			k++;
		e->player[i].inst_len = k;
		while(k < e->player[i].len)
		{
			hex = 0xFF & (str[k]);
			*inst = str[k];
			(hex <= 0xF) ? printf("0%x", hex) : printf("%x", hex);
			ft_putchar(' ');
			if ((k + 1) % 16 == 0)
				printf("\n");
			k++;
			inst++;
		}
		e->player[i].inst_len = k - e->player[i].inst_len;
		printf("\n\n");
		i++;
	}
}

void ft_build_vm(t_env *e, int argc)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_memcpy(e->arena + MEM_SIZE / (argc - 1) * (i - 1),
			e->player[i].inst, e->player[i].inst_len);
		e->player[i].index_start = MEM_SIZE / (argc - 1) * (i - 1);
		i++;
	}
	ft_print_hexa(e->arena, MEM_SIZE);
}