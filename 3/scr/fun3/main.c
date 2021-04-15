/*
Alumno: Montufar Perez Javier.
Grupo: 1CV1.
El programa calcula el precio de un boleto respecto a una tabla.
*/

#include <stdio.h>
#include "boleto.h"


int main(){
	int costo=0;/*Inicializamos el costo*/
	costo=boleto(50);/*La funcion boleto recibe la edad de la persona como parametro.*/
	if((costo==EMIN)||(costo==EMAX))
		printf("Edad invalida");
	else
		printf("Usted tiene: %d anios y el costo de su boleto es: $%d\n",edad, costo);
	return 0;
}