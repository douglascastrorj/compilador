

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
char* temp7 = (char*) malloc(sizeof(char) * 4 );
char* temp8 = (char*) malloc(sizeof(char) * 4 );
float temp9;
float temp10;
float temp11;
float temp12;
char* temp13 = (char*) malloc(sizeof(char) * 8 );
char* temp14 = (char*) malloc(sizeof(char) * 8 );
char* temp15 = (char*) malloc(sizeof(char) * 12 );
char* temp16 = (char*) malloc(sizeof(char) * 8 );
int temp17;
int temp18;
int temp19;
int temp20;
int temp21;
int temp22;
int temp23;
int temp24;

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
	strcpy(temp7,"foca");
	strcpy(temp8, temp7);
	std::cout  << temp8 << std::endl;
	temp9 = 2.5;
	temp10 = (float) temp2;
	temp11 = temp9 + temp10;
	temp12 = temp11;
	std::cout  << temp12 << std::endl;
	strcpy(temp13,"focafoca");
	strcpy(temp14, temp13);
	strcat(temp15, temp8);
	strcat(temp15, temp14);
	temp16 = temp14;
	temp14 = (char*) malloc(sizeof(char) * 20);
	strcpy(temp14, temp15);
	free(temp16);
	std::cout  << temp14 << std::endl;
	temp17 = 1;
	temp18 = 2;
	temp19 = temp17 + temp18;
	temp20 = 3;
	temp21 = temp19 + temp20;
	temp22 = 5;
	temp23 = temp21 + temp22;
	temp24 = temp23;
	std::cout  << temp24 << std::endl;
	return 0;
}
