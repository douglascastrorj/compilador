{"filter":false,"title":"continue.cpp","tooltip":"/Exemplos Cython/controleLoop/continue.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":43,"column":0},"action":"insert","lines":["","","/*Compilador Bolado*/","#include <iostream>","#include <string.h>","#include <stdio.h>","#include <stdlib.h>","","int temp1;","int temp2;","int temp3;","int temp4;","int temp5;","char* temp6 = (char*) malloc(sizeof(char) * 20 );","int temp7;","","int main(void)","{","\ttemp1 = 0;","\ttemp2 = temp1;","","\tinicio_loop_1: ","\ttemp3 = 2;","\ttemp4 = temp2 < temp3;","\ttemp7 = !temp4;","","\tif(temp7) \tgoto fim_loop_1;","\tstd::cout  << temp2 << std::endl;","\tgoto continue_loop_1;//continue comum","\tstrcpy(temp6,\"nunca serei printado\");","\tstd::cout  << temp6 << std::endl;","","\tcontinue_loop_1: ","\ttemp5 =  1;","\ttemp2 = temp5 + temp2;","\ttemp3 = 2;","\ttemp4 = temp2 < temp3;","\ttemp7 = !temp4;","","\tgoto inicio_loop_1;","\tfim_loop_1:","\treturn 0;","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":266,"scrollleft":0,"selection":{"start":{"row":43,"column":0},"end":{"row":43,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":13,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1487979176719,"hash":"d4d91b1e3b2b76fb5a864c71e84425046636b6ad"}