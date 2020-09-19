//
// Created by Akihiko Pearl on 9/12/20.
//

#include "vm.h"

void ft_print_hexa(char *str, int len)
{
	int i;
	int hex;

	i = 0;
	while (i < len)
	{
		hex = 0xFF & (*str);
		if (hex == 0)
			printf("00");
		else if (hex <= 0xF)
			printf(RED "0%x" RESET, hex);
		else
			printf("%x", hex);
		printf(" ");
		if ((i + 1) % (128 / 2) == 0)
			printf("\n");
		str++;
		i++;
	}
}
