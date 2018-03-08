

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* temp1 = (char*) malloc(sizeof(char) * 20 );
int temp2;
float temp3;
char temp4;
int temp5;
char* temp6 = (char*) malloc(sizeof(char) * 10 );
char* temp7 = (char*) malloc(sizeof(char) * 10 );
int temp8;
int temp9;
float temp10;
char temp11;
int temp12;

int main(void)
{
	strcpy(temp6,"Joãozinho");
	temp7 = temp1;
	temp1 = (char*) malloc(sizeof(char) * 20);
	strcpy(temp1, temp6);
	free(temp7);
	temp8 = 20;
	temp2 = temp8;
	temp9 = 1000;
	temp10 = (float) temp9;
	temp3 = temp10;
	temp11 = 'M';
	temp4 = temp11;
	temp12 = 0;
	temp5 = temp12;
	std::cout  << temp1 << std::endl;
	std::cout  << temp2 << std::endl;
	std::cout  << temp3 << std::endl;
	std::cout  << temp4 << std::endl;
	std::cout  << temp5 << std::endl;
	return 0;
}
