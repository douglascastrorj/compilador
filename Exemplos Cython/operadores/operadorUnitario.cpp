

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
	temp1 = 3;
	temp2 = temp1;
	temp3 =  1;
	temp2 = temp3 + temp2;
	std::cout  << temp2 << std::endl;
	temp4 = 4;
	temp5 = temp4;
	temp6 =  1;
	temp5 = temp5 - temp6;
	std::cout  << temp5 << std::endl;
	return 0;
}
