//
// Created by Akihiko Pearl on 9/12/20.
//
#include "vm.h"

void	ft_check_args(t_env e, int opcode, int acb)
{
	int	nb_of_args;
	int i;

	i = -1;
	nb_of_args = 0;

	printf("for opcode %i and acb is %#x\n", opcode, acb);
	if (acb & 0x3) //If the last to digit are not blank => error
		printf("ERROR\n");
	while (++i < 3)
	 	if (acb >> ( 6 - i * 2) & 0x3) //http://easyonlineconverter.com/converters/bitwise-calculator.html
	 		nb_of_args++;
	 if (nb_of_args != e.op_tab[opcode].nb_params)
	 	printf("ERROR nb of args");
	printf("nb_of_args is %i\n", nb_of_args);
	 i = 0;
	 while(i < nb_of_args)
	 {
	 	if ((acb >> (6 - i * 2) & 0x3)== REG_CODE &&
				(e.op_tab[opcode].params_type[i] & T_REG) == T_REG)
	 		printf("REG\n");
	 	else if ((acb >> (6 - i * 2) & 0x3) == DIR_CODE &&
				(e.op_tab[opcode].params_type[i] & T_DIR) == T_DIR)
			printf("DIR\n");

		else if ((acb >> (6 - i * 2) & 0x3) == IND_CODE &&
				(e.op_tab[opcode].params_type[i] & T_IND) == T_IND)
			printf("IND\n");
		else
			printf("ERROR ARG - acb >> (6-i*2) is %i\n", acb >> (6 - i * 2));
		i++;
	 }
}
//https://decimal.info/hex-to-decimal/5/how-to-convert-0X54-to-decimal.html
