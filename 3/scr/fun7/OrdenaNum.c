/*
Definicion de funciones.
*/

#include <stdio.h>
#include "OrdenaNum.h"
#include <string.h>

float ordenaCuaterna(cuaterna* auxiliar, const cuaterna* c){
	/*Validacion*/
	if(!(APVAL(auxiliar)))
		return APINV;
	
	if(!(APVAL(c)))
		return APINV;
	
	float x1,x2,x3,x4,aux1,aux2,aux3,aux4=0;
	
	x1 = getN1(c);
	x2 = getN2(c);
	x3 = getN3(c);
	x4 = getN4(c);
	aux1 = Min4Num(x1,x2,x3,x4);
	aux2 = Max4Num(Min3Num(x1,x2,x3),Min3Num(x2,x3,x4),Min3Num(x1,x2,x4),Min3Num(x1,x3,x4));
	aux3 = Min4Num(Max3Num(x1,x2,x3),Max3Num(x2,x3,x4),Max3Num(x1,x2,x4),Max3Num(x1,x3,x4));
	aux4 = Max4Num(x1,x2,x3,x4);
	iniCuaterna(auxiliar , aux1, aux2, aux3, aux4);/*Construimos una cuaterna que esta ordenado*/
	
	return OK;
}


float getMasGrande(const cuaterna* c){
	/*Validacion*/
	if(!(APVAL(c)))
		return APINV;

	float aux=0;
	cuaterna auxiliar;/*Declaramos una cuaterna auxiliar en donde vamos a guardar la cuaterna ordenada*/
	ordenaCuaterna(&auxiliar, c);/*Llamamos a la funcion ordena cuaterna, que ordenara la cuaterna*/
	aux = getN4(&auxiliar);/*Regresamos el 4to elemento de la cuaterna ordenada es decir el elemento mas grande*/
	
	return aux;
}

float getSegMasGrande(const cuaterna* c){
	/*Validacion*/
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	cuaterna auxiliar;/*Declaramos una cuaterna auxiliar en donde vamos a guardar la cuaterna ordenada*/
	ordenaCuaterna(&auxiliar, c);/*Llamamos a la funcion ordena cuaterna, que ordenara la cuaterna*/
	aux = getN3(&auxiliar);/*Regresamos el 3er elemento de la cuaterna ordenada es decir el elemento mas grande*/
	
	return aux;
}

float getSegMasPeque(const cuaterna* c){
	/*Validacion*/
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	cuaterna auxiliar;/*Declaramos una cuaterna auxiliar en donde vamos a guardar la cuaterna ordenada*/
	ordenaCuaterna(&auxiliar, c);/*Llamamos a la funcion ordena cuaterna, que ordenara la cuaterna*/
	aux = getN2(&auxiliar);/*Regresamos el 3er elemento de la cuaterna ordenada es decir el elemento mas grande*/
	
	return aux;
}

float getMasPeque(const cuaterna* c){
	/*Validacion*/
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	cuaterna auxiliar;/*Declaramos una cuaterna auxiliar en donde vamos a guardar la cuaterna ordenada*/
	ordenaCuaterna(&auxiliar, c);/*Llamamos a la funcion ordena cuaterna, que ordenara la cuaterna*/
	aux = getN1(&auxiliar);/*Regresamos el 3er elemento de la cuaterna ordenada es decir el elemento mas grande*/
	
	return aux;
}


float cpyCuaterna(cuaterna* auxiliar, const cuaterna* c){
	/*Validacion*/
	if(!(APVAL(auxiliar)))
		return APINV;
	
	if(!(APVAL(c)))
		return APINV;
	/*Extraemos los elementos de la cuaterna dada, e inicializamos una nueva con esos valores*/
	iniCuaterna(auxiliar , getN1(c), getN2(c), getN3(c), getN4(c));
	
	return OK;
	
}

char* tostrCua(char* sal,const cuaterna* c){
	/*Declaremos una cadena auxiliar en donde serab guardados los resultados*/
	char aux[10000];
	/*Validacion*/
	if(!(APVAL(sal)&&APVAL(c)))
		strcpy(sal,"NULL");
	/*Inicializamos la cadena auxiliar con el caracter "("*/
	strcpy(sal,"(");
	/*Imprimimos en auxiliar cada uno de los valores de la cuaterna*/
    sprintf(aux,"%.2f, %.2f, %.2f, %.2f",c->n1,c->n2,c->n3,c->n4);
	/*Concatenamos a salida auxiliar*/
    strcat(sal,aux);
	/*Concatenamos a salida ")"*/
    strcat(sal,")");
	
	return sal;
}


/*---------------------------------------------
	SETS, GETS Y CONSTRUCTOR DE LOS TIPOS
-----------------------------------------------*/


float iniCuaterna(cuaterna* c, float x1, float x2, float x3, float x4){
	/*Validacion*/
	if(!(APVAL(c)))
		return APINV;
	
	c->n1=x1;
	c->n2=x2;
	c->n3=x3;
	c->n4=x4;
	
	return OK;
}

float getN1(const cuaterna* c){
	float valor = 0;
	valor=c->n1;
	return valor;
}

float getN2(const cuaterna* c){
	float valor = 0;
	valor=c->n2;
	return valor;
}

float getN3(const cuaterna* c){
	float valor = 0;
	valor=c->n3;
	return valor;
}

float getN4(const cuaterna* c){
	float valor = 0;
	valor=c->n4;
	return valor;
}



float setN1(cuaterna* c, float valor){
	c->n1=valor;
	return OK;
}

float setN2(cuaterna* c, float valor){
	c->n2=valor;
	return OK;
}

float setN3(cuaterna* c, float valor){
	c->n3=valor;
	return OK;
}

float setN4(cuaterna* c, float valor){
	c->n4=valor;
	return OK;
}