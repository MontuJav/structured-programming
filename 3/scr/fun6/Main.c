/*
Alumno: Montufar Perez Javier.
Grupo: 1CV1.
El programa realiza una comparacion de 3 caracteres con una tabla.
*/

#include <stdio.h>
#include "cuentaVocales.h"

int main(){
	tabla t; /*Declaramos el objeto tabla*/
	iniTabla(&t, 0,20,30,70, 40,60,80,0, 50,90,0,0, 100,0,0,0); /*Inicializamos el objeto tabla*/
	
	printf("\nDe los caracteres: (%c %c %c), hay %d vocal(es), %d consonante(s) y %d no letra(s)\n\n",'A', 's', '4',cuentaVocales('A', 's', '4'), 
	cuentaConsonantes('A', 's', '4'), cuentaNoLetras('A', 's', '4'));
	printf("\nPor lo que el valor de la tabla es: %d\n", valorEnTabla(&t, 'A', 's', '4'));
	return 0;
}