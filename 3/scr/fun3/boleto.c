/*
Definicion de funciones.
*/

#include <stdio.h>
#include "boleto.h"

 int boleto (const int edad){
		int costo=0;/*Inicializamos la edad*/
	  /*VALIDACION DE LA EDAD*/
		if(edad>100)/*La edad se encuentra entre [0-5]*/
			return  EMAX;
		else if(edad<0)
			return  EMIN;
		else if((edad==0)||(edad<=5))/*La edad se encuentra entre [0-5]*/
			costo = PBOL10;
		else if((edad>5)&&(edad<10)) /*La edad de se encuentra entre (5-10)*/
			costo = PBOL20;
		else           			     /*Cualquier edad (10-100]*/
			costo = PMAX;
		return costo;
  }