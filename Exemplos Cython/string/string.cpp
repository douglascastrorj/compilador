

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* temp1 = (char*) malloc(sizeof(char) * 5 );
char* temp2 = (char*) malloc(sizeof(char) * 5 );
char* temp3 = (char*) malloc(sizeof(char) * 7 );
char* temp4 = (char*) malloc(sizeof(char) * 7 );
char* temp5 = (char*) malloc(sizeof(char) * 12 );
char* temp6 = (char*) malloc(sizeof(char) * 12 );
char* temp7 = (char*) malloc(sizeof(char) * 17 );
char* temp8 = (char*) malloc(sizeof(char) * 5 );

int main(void)
{
	strcpy(temp1,"hello");
	strcpy(temp2, temp1);
	strcpy(temp3," world!");
	strcpy(temp4, temp3);
	strcat(temp5, temp2);
	strcat(temp5, temp4);
	strcpy(temp6, temp5);
	std::cout  << temp6 << std::endl;
	strcat(temp7, temp6);
	strcat(temp7, temp2);
	temp8 = temp6;
	temp6 = (char*) malloc(sizeof(char) * 29);
	strcpy(temp6, temp7);
	free(temp8);
	std::cout  << temp6 << std::endl;
	return 0;
}
