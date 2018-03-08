

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
	temp1 = 5;
	temp2 = temp1;
	temp3 = 1;
	temp6 = !temp3;

	if(temp6) goto fim_if_1;
	temp4 = 4;
	temp5 = temp4;
	std::cout  << temp5 << std::endl;

	fim_if_1:

	std::cout  << temp2 << std::endl;
	return 0;
}
