

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
char* temp6 = (char*) malloc(sizeof(char) * 20 );
int temp7;

int main(void)
{
	temp1 = 0;
	temp2 = temp1;

	inicio_loop_1: 
	temp3 = 2;
	temp4 = temp2 < temp3;
	temp7 = !temp4;

	if(temp7) 	goto fim_loop_1;
	std::cout  << temp2 << std::endl;
	goto continue_loop_1;//continue comum
	strcpy(temp6,"nunca serei printado");
	std::cout  << temp6 << std::endl;

	continue_loop_1: 
	temp5 =  1;
	temp2 = temp5 + temp2;
	temp3 = 2;
	temp4 = temp2 < temp3;
	temp7 = !temp4;

	goto inicio_loop_1;
	fim_loop_1:
	return 0;
}
