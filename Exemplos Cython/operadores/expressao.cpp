

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int temp1;
int temp2;
int temp3;
int temp4;
float temp5;
float temp6;
float temp7;
float temp8;
float temp9;
float temp10;
float temp11;
float temp12;
float temp13;
float temp14;

int main(void)
{
	temp1 = 1;
	temp2 = 1;
	temp3 = temp1 + temp2;
	temp4 = temp3;
	temp5 = 0.5;
	temp6 = 1.5;
	temp7 = temp5 + temp6;
	temp8 = temp7;
	temp9 = (float) temp4;
	temp10 = temp9 + temp8;
	temp11 = temp8 * temp10;
	temp12 = (float) temp4;
	temp13 = temp12 + temp11;
	temp14 = temp13;
	std::cout  << temp4 << std::endl;
	std::cout  << temp8 << std::endl;
	std::cout  << temp14 << std::endl;
	return 0;
}
