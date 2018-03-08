

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int temp1;
int temp2;
int temp3;
int temp4;

int main(void)
{
	temp1 = 1;
	temp2 = temp1;
	inicio_loop_1:
	std::cout  << temp2 << std::endl;

	continue_loop_1:
	temp3 = 1;
	temp4 = temp2 < temp3;
	if(temp4)	goto inicio_loop_1;
	fim_loop_1:
	return 0;
}
