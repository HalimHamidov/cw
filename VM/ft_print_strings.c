#include "vm.h"

void ft_print_strings(t_env *e, int argc)
{
	int i;
	int k;
	char *str;
	int hex;

	printf("%d\n", BUFF_SIZE);
	i = 0;
	while (++i < argc)
	{
		printf("\nFile: %i, Len: %i ----->\n", i, e->player[i].len);
		str = e->player[i].string;
		k = -1;

		while(++k < e->player[i].len)
		{
			hex = 0xFF & (*str);
			(hex <= 0xF) ? printf("0%x", hex) : printf("%x", hex);
			ft_putchar(' ');
			if ((k + 1) % 16 == 0)
				printf("\n");
			str++;
		}
	}
}