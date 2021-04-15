#ifndef BOLETO_H
#define BOLETO_H

/*
El objetivo de este programa es calcular el costo de los boletos
dependiendo de la edad de las personas, para ello se requiere la edad
de la persona y el costo del boleto que le corresponde
*/

/*-------------------------
	CONSTANTES
---------------------------*/

#define PBOL10   10     /* Costo del boleto para edad de 0 a 5 años*/
#define PBOL20   20     /* Costo del boleto para edad de 5 a 10 años*/
#define PMAX     25     /* Costo del boleto para edades mayores de 10 años*/


/*-------------------------
	CONSTANTES DE ERROR
---------------------------*/

#define EMIN	 -1     /* edades negativas*/
#define EMAX	 -2     /* edades mayores de 100 años*/

/*
función boleto
tiene como parámetro
edad  el cual representa la edad de la persona
regresa el costo del boleto 
*/

int boleto (const int edad);

#endif