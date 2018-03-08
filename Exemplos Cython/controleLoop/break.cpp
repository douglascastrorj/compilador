

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
int temp7;
char* temp8 = (char*) malloc(sizeof(char) * 7 );
int temp9;
int temp10;

int main(void)
{
	temp1 = 0;
	temp2 = temp1;

	inicio_loop_1: 
	temp3 = 100;
	temp4 = temp2 < temp3;
	temp10 = !temp4;

	if(temp10) 	goto fim_loop_1;
	temp6 = 2;
	temp7 = temp2 == temp6;
	temp9 = !temp7;

	if(temp9) goto fim_if_2;
	strcpy(temp8,"quebrou");
	std::cout  << temp8 << std::endl;
	goto fim_loop_1;//break comum

	fim_if_2:

	std::cout  << temp2 << std::endl;

	continue_loop_1: 
	temp5 =  1;
	temp2 = temp5 + temp2;
	temp3 = 100;
	temp4 = temp2 < temp3;
	temp10 = !temp4;

	goto inicio_loop_1;
	fim_loop_1:
	return 0;
}
