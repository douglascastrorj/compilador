

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

float temp1;
int temp2;
int temp3;
float temp4;
float temp5;
int temp6;
int temp7;

int main(void)
{
	temp1 = 4.5;
	temp3 = (int) temp1;
	temp2 = temp3;
	std::cout  << temp2 << std::endl;
	temp4 = 3.1415;
	temp5 = temp4;
	temp7 = (int) temp5;
	temp6 = temp7;
	std::cout  << temp6 << std::endl;
	return 0;
}
