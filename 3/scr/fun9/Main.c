/*
Alumno: Montufar Perez Javier.
Grupo: 1CV1.
El progrma realiza el calculo del mas grande de los 4 parametros mas pequenios.
*/

#include <stdio.h>
#include "Ordena5Num.h"

int main(){
	quinterna q1,q2,qOrdenada1,qOrdenada2;
	char salida[10000];
	iniQuinterna(&q1, 3,5,2,-1,7);
	iniQuinterna(&q2, 2,11,4,22,17);

	printf("\nDe los numeros: %s",tostrQui(salida,&q1));
	printf("\nEl mas grande de los 4 parametros mas pequenios es: %.2f\n",getCuarto(&q1));
	printf("\nDe los numeros: %s",tostrQui(salida,&q2));
	printf("\nEl mas grande de los 4 parametros mas pequenios es: %.2f\n",getCuarto(&q2));	
	return 0;
}