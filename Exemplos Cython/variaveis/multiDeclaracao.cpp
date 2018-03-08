

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
	temp3 = 1;
	temp1 = temp3;
	temp4 = 2;
	temp2 = temp4;
	std::cout  << temp1 << temp2 << std::endl;
	return 0;
}
