

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* temp1 = (char*) malloc(sizeof(char) * 10 );
char* temp2 = (char*) malloc(sizeof(char) * 10 );
int temp3;
int temp4;
int temp5;
int temp6;
char temp7;
char temp8;
int temp9;
int temp10;

int main(void)
{
	strcpy(temp1,"Joãozinho");
	strcpy(temp2, temp1);
	temp3 = 20;
	temp4 = temp3;
	temp5 = 750;
	temp6 = temp5;
	temp7 = 'M';
	temp8 = temp7;
	temp9 = 0;
	temp10 = temp9;
	std::cout  << temp2 << std::endl;
	std::cout  << temp4 << std::endl;
	std::cout  << temp6 << std::endl;
	std::cout  << temp8 << std::endl;
	std::cout  << temp10 << std::endl;
	return 0;
}
