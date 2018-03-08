

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int temp1;
int temp2;
int temp3;
char* temp4 = (char*) malloc(sizeof(char) * 17 );
int temp5;
int temp6;
int temp7;
char* temp8 = (char*) malloc(sizeof(char) * 22 );
int temp9;
int temp10;
int temp11;
int temp12;
int temp13;
float temp14;
float temp15;
int temp16;

int main(void)
{
	temp1 = 0;
	temp2 = temp1;
	temp3 = 1;
	temp5 = !temp3;

	if(temp5) goto fim_if_1;
	strcpy(temp4,"sempre entra aqui");
	std::cout  << temp4 << std::endl;

	fim_if_1:

	temp6 = 0;
	temp7 = temp2 == temp6;
	temp9 = !temp7;

	if(temp9) goto fim_if_2;
	strcpy(temp8,"variavel 'a' igual a 0");
	std::cout  << temp8 << std::endl;

	fim_if_2:

	temp10 = 1;
	temp11 = temp10;
	temp12 = 2;
	temp13 = temp11 < temp12;
	temp16 = !temp13;

	if(temp16) goto fim_if_3;
	temp14 = 3.14;
	temp15 = temp14;
	std::cout  << temp15 << std::endl;

	fim_if_3:

	return 0;
}
