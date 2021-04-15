#include <stdio.h>
#ifndef DEF_FUN
#define DEF_FUN
/**********************************************************************************************************************
Autor:	Consuelo Sánchez Fuentes
Grupo: 1CV1
DETERMINAR LA TALLA
Se determinara la talla del Usario mediante su sexo y peso
***********************************************************************************************************************/
/******Constantes*******/
#define MUJER 1
#define HOMBRE 0
/*Calculo de la talla de un usario
Recibe dos parametros:
Sexo---- Sexo del usuario
Peso---- Peso del usuario
Se le pediran estos dos datos al usario para poder calcular el indice de masa corporal*/
/*Validara que el sexo y la talla ingresada sean correctos*/
int Val_Dat(float, float);
/*Llamara a la función validar y en caso de ser los datos correctos asignara la talla*/
float Asig_Talla(float, float);
/*Busca la talla si es mujer*/
float Talla_Mujer(float);
/*Busca la talla si es hombre*/
float Talla_Homb(float);

 #endif