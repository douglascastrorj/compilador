{"filter":false,"title":"while.cpp","tooltip":"/Exemplos Cython/while.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":37,"column":0},"action":"insert","lines":["","","/*Compilador Bolado*/","#include <iostream>","#include <string.h>","#include <stdio.h>","#include <stdlib.h>","","int temp1;","int temp2;","int temp3;","int temp4;","int temp5;","int temp6;","","int main(void)","{","\ttemp1 = 0;","\ttemp2 = temp1;","\ttemp3 = 3;","\ttemp4 = temp2 < temp3;","\ttemp6 = !temp4;","\tinicio_loop_1:\tif(temp6) goto fim_loop_1;","\tstd::cout  << temp2 << std::endl;","\ttemp5 =  1;","\ttemp2 = temp5 + temp2;","","\tcontinue_loop_1://continueLabel","\ttemp3 = 3;","\ttemp4 = temp2 < temp3;","\ttemp6 = !temp4;","\tgoto inicio_loop_1;","","\tfim_loop_1:","","\treturn 0;","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":152,"scrollleft":0,"selection":{"start":{"row":37,"column":0},"end":{"row":37,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":7,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1487978205159,"hash":"da59e5c75ce432df3e951a5e61882332bb9881d3"}