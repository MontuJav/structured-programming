/*
Alumno: Montufar Perez Javier.
Grupo: 1CV1.
El programa calcula el precio de un boleto respecto a una tabla.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Def_Fun.h"

int main()
{
	float peso=80;
	float estatura=1.83;
	char msj[1000];/*Cadena donde vamos a concatenar la salida de la funcion*/
	Asig_O(peso,estatura,msj); /*Validamos que el peso y estatura sean correctos y buscamos su IMC*/
	printf("Su peso es: %.2f\nSu estatura: %.2f\nSu IMC: %.2f\n",peso,estatura,Cal_IMC(peso, estatura));
	printf("Usted es: %s",msj);
}