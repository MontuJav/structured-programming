/*
Definicion de funciones.
*/

#include <stdio.h>
#include "Ordena5Num.h"
#include <string.h>

float ordenaQuinterna(quinterna* auxiliar, const quinterna* c){
	if(!(APVAL(auxiliar)))
		return APINV;
	
	if(!(APVAL(c)))
		return APINV;
	
	float x1,x2,x3,x4,x5,aux1,aux2,aux3,aux4,aux5,u,v=0;
	
	x1 = getN1(c);
	x2 = getN2(c);
	x3 = getN3(c);
	x4 = getN4(c);
	x5 = getN5(c);
	
	aux1 = Min5Num(x1,x2,x3,x4,x5);
	aux2 = Max5Num(Min4Num(x1,x2,x3,x4),Min4Num(x2,x3,x4,x5),Min4Num(x1,x2,x4,x5),Min4Num(x1,x3,x4,x5),Min4Num(x1,x2,x3,x5));
	aux4 = Min5Num(Max4Num(x1,x2,x3,x4),Max4Num(x2,x3,x4,x5),Max4Num(x1,x2,x4,x5),Max4Num(x1,x3,x4,x5),Max4Num(x1,x2,x3,x5));
	aux5 = Max5Num(x1,x2,x3,x4,x5);
	aux3 = calculaMedio(aux1, aux2, aux4, aux5, x1, x2, x3, x4, x5);
	
	iniQuinterna(auxiliar , aux1, aux2, aux3, aux4, aux5);
	
	return OK;
}

float calculaMedio(float aux1,float aux2,float aux4,float aux5, float x1, float x2, float x3, float x4, float x5){
	
		float medio=0;/*Inicializamos el medio*/
		/*El medio debe ser mayor al segundo elemento mas pequenio de la quinterna y al segundo 
        elemento mas grande de la quinterna, de ese modo modod vamos probando para cada uno de los candidatos*/
		if((x1>=aux2)&&(x1<=aux4)){
			medio = x1;
		}
		else if((x2>=aux2)&&(x2<=aux4)){
			medio = x2;
		}
		else if((x3>=aux2)&&(x3<=aux4)){
			medio = x3;
		}
		else if((x4>=aux2)&&(x4<=aux4)){
			medio = x4;
		}
		else if((x5>=aux2)&&(x5<=aux4)){
			medio = x5;
		}
		
		return medio;
}
float getQuinto(const quinterna* c){
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	quinterna auxiliar;

	ordenaQuinterna(&auxiliar, c);
	aux = getN5(&auxiliar);
	
	return aux;
}

float getCuarto(const quinterna* c){
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	quinterna auxiliar;

	ordenaQuinterna(&auxiliar, c);
	aux = getN4(&auxiliar);
	
	return aux;
}

float getTercero(const quinterna* c){
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	quinterna auxiliar;

	ordenaQuinterna(&auxiliar, c);
	aux = getN3(&auxiliar);
	
	return aux;
}

float getSegundo(const quinterna* c){
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	quinterna auxiliar;

	ordenaQuinterna(&auxiliar, c);
	char salida[100];
	aux = getN2(&auxiliar);
	
	return aux;
}

float getPrimer(const quinterna* c){
	if(!(APVAL(c)))
		return APINV;
	
	float aux=0;
	quinterna auxiliar;

	ordenaQuinterna(&auxiliar, c);
	aux = getN1(&auxiliar);
	
	return aux;
}


float cpyQuinterna(quinterna* auxiliar, const quinterna* c){
	if(!(APVAL(auxiliar)))
		return APINV;
	
	if(!(APVAL(c)))
		return APINV;
	iniQuinterna(auxiliar , getN1(c), getN2(c), getN3(c), getN4(c), getN5(c));
	
	return OK;
	
}

char* tostrQui(char* sal,const quinterna* c){
	char aux[10000];
	if(!(APVAL(sal)&&APVAL(c)))
		strcpy(sal,"NULL");
	
	strcpy(sal,"(");
    sprintf(aux,"%.2f, %.2f, %.2f, %.2f, %.2f",c->n1,c->n2,c->n3,c->n4,c->n5);
    strcat(sal,aux);
    strcat(sal,")");
	
	return sal;
}


/*---------------------------------------------
	SETS, GETS Y CONSTRUCTOR DE LOS TIPOS
-----------------------------------------------*/


float iniQuinterna(quinterna* c, float x1, float x2, float x3, float x4, float x5){
	
	if(!(APVAL(c)))
		return APINV;
	
	c->n1=x1;
	c->n2=x2;
	c->n3=x3;
	c->n4=x4;
	c->n5=x5;
	
	return OK;
}

float getN1(const quinterna* c){
	float valor = 0;
	valor=c->n1;
	return valor;
}

float getN2(const quinterna* c){
	float valor = 0;
	valor=c->n2;
	return valor;
}

float getN3(const quinterna* c){
	float valor = 0;
	valor=c->n3;
	return valor;
}

float getN4(const quinterna* c){
	float valor = 0;
	valor=c->n4;
	return valor;
}

float getN5(const quinterna* c){
	float valor = 0;
	valor=c->n5;
	return valor;
}



float setN1(quinterna* c, float valor){
	c->n1=valor;
	return OK;
}

float setN2(quinterna* c, float valor){
	c->n2=valor;
	return OK;
}

float setN3(quinterna* c, float valor){
	c->n3=valor;
	return OK;
}

float setN4(quinterna* c, float valor){
	c->n4=valor;
	return OK;
}

float setN5(quinterna* c, float valor){
	c->n5=valor;
	return OK;
}