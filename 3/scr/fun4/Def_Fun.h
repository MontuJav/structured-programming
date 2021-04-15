#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#ifndef DEF_FUN
#define DEF_FUN

/*
DETERMINAR INDICE DE MASA CORPORAL
Se determinara el indice de Masa Corporal del Usario y en base a esto se le dira al usuario que tipo de obesidad tiene
*/


/*Calculo de Indice de Masa Corporal
Recibe dos parametros:
Peso---- Peso del usuario
Estatura---- Estatura del usuario
Se le pediran estos dos datos al usario para poder calcular el indice de masa corporal*/
float Cal_IMC(float peso, float estatura);

/*Validara que los datos Peso y Estatura sean mayores a 0*/
int Val_Dat(float peso, float estatura);

/*Llamara a la función validar y en caso de ser los datos correctos llama a la función Busca_O la cual se encargara de asignara el tipo de obesidad*/
void Asig_O(float peso, float estatura,char* msj);

/*Busca el tipo de Obesidad con el IMC*/
void Busca_O(float IMC, char* msj);

 #endif