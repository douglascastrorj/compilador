

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int temp1;
int temp2;
int temp3;
int temp4;
int temp5;
int temp6;

int main(void)
{
	temp1 = 0;
	temp2 = temp1;
	temp3 = 3;
	temp4 = temp2 < temp3;
	temp6 = !temp4;
	inicio_loop_1:	if(temp6) goto fim_loop_1;
	std::cout  << temp2 << std::endl;
	temp5 =  1;
	temp2 = temp5 + temp2;

	continue_loop_1://continueLabel
	temp3 = 3;
	temp4 = temp2 < temp3;
	temp6 = !temp4;
	goto inicio_loop_1;

	fim_loop_1:

	return 0;
}
