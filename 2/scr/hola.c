/*
Alumno: Montufar Perez Javier.
Grupo: 1CV1.
El programa realiza un swap de las letras ABCDE.
*/

#include <stdio.h>
#include "fun.h"

int main(){
    char v, w, x, y, z;
	v = 'A'; w = 'B'; x = 'C'; y = 'D'; z = 'E';
	printf("%8c  %c  %c  %c  %c\n", v,w,x,y,z);
	printf("--------------------\n");
	
	swap1(&v,&w,&x,&y,&z);
	printf("swap1: %c  %c  %c  %c  %c\n", v,w,x,y,z);
	
	swap2(&v,&w,&x,&y,&z);
	printf("swap2: %c  %c  %c  %c  %c\n", v,w,x,y,z);
	
	swap3(&v,&w,&x,&y,&z);
	printf("swap3: %c  %c  %c  %c  %c\n", v,w,x,y,z);
	
	swap4(&v,&w,&x,&y,&z);
	printf("swap4: %c  %c  %c  %c  %c\n", v,w,x,y,z);
	
	
	return 0;
}