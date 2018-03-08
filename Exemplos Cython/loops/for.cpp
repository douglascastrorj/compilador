

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
int temp8;
int temp9;
int temp10;
int temp11;
int temp12;

int main(void)
{
	temp1 = 0;
	temp2 = temp1;

	inicio_loop_1: 
	temp3 = 3;
	temp4 = temp2 < temp3;
	temp6 = !temp4;

	if(temp6) 	goto fim_loop_1;
	std::cout  << temp2 << std::endl;

	continue_loop_1: 
	temp5 =  1;
	temp2 = temp5 + temp2;
	temp3 = 3;
	temp4 = temp2 < temp3;
	temp6 = !temp4;

	goto inicio_loop_1;
	fim_loop_1:
	temp7 = 0;
	temp8 = temp7;

	inicio_loop_2: 
	temp9 = 10;
	temp10 = temp8 <= temp9;
	temp12 = !temp10;

	if(temp12) 	goto fim_loop_2;
	std::cout  << temp8 << std::endl;

	continue_loop_2: 
	temp11 = 5;

	temp8 = temp8 + temp11;
	temp9 = 10;
	temp10 = temp8 <= temp9;
	temp12 = !temp10;

	goto inicio_loop_2;
	fim_loop_2:
	return 0;
}
