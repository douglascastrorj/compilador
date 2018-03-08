

/*Compilador Bolado*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* temp1 = (char*) malloc(sizeof(char) * 29 );
char* temp2 = (char*) malloc(sizeof(char) * 20 );
char* temp3 = (char*) malloc(sizeof(char) * 15 );

int main(void)
{
	strcpy(temp1,"-- What is the music of life?");
	std::cout  << temp1 << std::endl;
	std::cin >> temp2;
	strcpy(temp3,"-- Welcome home");
	std::cout  << temp3 << std::endl;
	return 0;
}
