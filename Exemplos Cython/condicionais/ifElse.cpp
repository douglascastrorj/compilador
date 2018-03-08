

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int temp1;
int temp2;
char* temp4 = (char*) malloc(sizeof(char) * 6 );
char* temp5 = (char*) malloc(sizeof(char) * 6 );
int temp6;

int main(void)
{
	temp1 = 1;
	temp2 = temp1;
	int temp3 = ! temp2;
	temp6 = !temp3;

	if(temp6) goto inicio_else_1;
	strcpy(temp4," lala ");
	std::cout  << temp4 << std::endl;

	goto fim_if_1;
	inicio_else_1:
	strcpy(temp5,"lelele");
	std::cout  << temp5 << std::endl;

	fim_if_1:
	return 0;
}
