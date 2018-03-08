

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
	temp1 = 3;
	temp2 = temp1;
	temp3 = 3;

	temp2 = temp2 + temp3;
	std::cout  << temp2 << std::endl;
	temp4 = 6;

	temp2 = temp2 / temp4;
	std::cout  << temp2 << std::endl;
	return 0;
}
