/*
Definicion de funciones.
*/

#include <stdio.h>
#include "fun.h"

void swap1( char* a, char* b, char* c, char* d, char*e){
// ABCDE
// BADEC
    char aux;
	aux = *a;
	*a = *b;
	*b = aux;
	aux = *c;
	*c = *d;
	*d = *e;
	*e = aux;
}

void swap2( char* a, char* b, char* c, char* d, char *e){
//  ABCDE
//  BEACD
	
	char aux;
	aux = *a;
	*a = *b;
	*b = *e;
	*e = *d;
	*d = *c;
	*c = aux;
}
void swap3( char *a, char* b, char* c, char* d, char* e){
//  ABCDE
//  ECABD
	
	char aux;
	aux = *a;
	*a = *e;
	*e = *d;
	*d = *b;
	*b = *c;
	*c = aux;
}
void swap4( char *a, char* b, char* c, char* d, char* e){
//  ABCDE
//  DCEBA
	
	char aux;
	aux = *a;
	*a = *d;
	*d = *b;
	*b = *c;
	*c = *e;
	*e = aux;
}