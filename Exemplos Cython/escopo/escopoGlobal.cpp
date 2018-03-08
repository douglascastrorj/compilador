

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

float temp1;
float temp2;
int temp3;
int temp4;
int temp5;
int temp6;
int temp7;
int temp8;
int temp9;

int main(void)
{
	temp1 = 3.14;
	temp2 = temp1;
	temp3 = 0;
	temp4 = temp3;
	temp5 = 0;
	temp6 = temp4 == temp5;
	temp9 = !temp6;

	if(temp9) goto fim_if_1;
	temp7 = 3;
	temp8 = temp7;
	std::cout  << temp8 << std::endl;
	std::cout  << temp2 << std::endl;

	fim_if_1:

	return 0;
}
