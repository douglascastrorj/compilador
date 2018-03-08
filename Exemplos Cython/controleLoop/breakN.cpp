

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
char* temp7 = (char*) malloc(sizeof(char) * 15 );
int temp8;
int temp9;
int temp10;

int main(void)
{
	temp1 = 0;
	temp2 = temp1;

	inicio_loop_1: 
	temp3 = 2;
	temp4 = temp2 < temp3;
	temp10 = !temp4;

	if(temp10) 	goto fim_loop_1;
	std::cout  << temp2 << std::endl;
	temp6 = 1;
	temp9 = !temp6;
	inicio_loop_2:	if(temp9) goto fim_loop_2;
	inicio_loop_3:
	strcpy(temp7,"quebrar 2 while");
	std::cout  << temp7 << std::endl;
	goto fim_loop_2;//break_func

	continue_loop_3:
	temp8 = 1;
	if(temp8)	goto inicio_loop_3;
	fim_loop_3:

	continue_loop_2://continueLabel
	temp6 = 1;
	temp9 = !temp6;
	goto inicio_loop_2;

	fim_loop_2:


	continue_loop_1: 
	temp5 =  1;
	temp2 = temp5 + temp2;
	temp3 = 2;
	temp4 = temp2 < temp3;
	temp10 = !temp4;

	goto inicio_loop_1;
	fim_loop_1:
	return 0;
}
