#ifndef ORDENANUM_H
#define ORDENANUM_H

/*
Función para el calculo del mas pequeño de los tres mas grandes.
*/
/*-------------------------
	CONSTANTES
---------------------------*/

/*-------------------------
	CONSTANTES DE ERROR
---------------------------*/
#define OK           0.0 /*Sin Error*/
#define ERROR        1.0 /*Si enviamos no numeros a la funcion*/
#define APINV        3.0 /*Si recibe apuntador invalido*/
/*-------------------------
	MACROS REQUERIDAS
---------------------------*/

#define APVAL(p)     ((p)!=NULL) /*Valida apuntadores*/

#define Min2Num(x,y)		(x<=y?x:y)
#define Min3Num(x,y,z)		(Min2Num(x,y)<=z?Min2Num(x,y):z)
#define Min4Num(x,y,z,a)	(Min3Num(x,y,z)<=a?Min3Num(x,y,z):a)

#define Max2Num(x,y)		(x>=y?x:y)
#define Max3Num(x,y,z)		(Max2Num(x,y)>=z?Max2Num(x,y):z)
#define Max4Num(x,y,z,a)	(Max3Num(x,y,z)>=a?Max3Num(x,y,z):a)


/*-------------------------
	DEFINICIONES DE TIPOS
---------------------------*/
/* Definimos al tipo cuaterna, que como su nombre lo indica esta compuesta por 4 numeros flotantes */
typedef struct{
	float n1;
	float n2;
	float n3;
	float n4;
}cuaterna;

/*-------------------------
	CONSTRUCTOR TIPOS
---------------------------*/
/* Definimos a la funcion constructora del tipo cuaterna */
float iniCuaterna(cuaterna*, float n1, float n2, float n3, float n4);

/*-------------------------
	SETS Y GETS DE LOS TIPOS
---------------------------*/
/* Definimos a los sets y gets de cada elemento de la cuaterna */
float setN1(cuaterna* c, float valor);
float setN2(cuaterna* c, float valor);
float setN3(cuaterna* c, float valor);
float setN4(cuaterna* c, float valor);

float getN1(const cuaterna* c);
float getN2(const cuaterna* c);
float getN3(const cuaterna* c);
float getN4(const cuaterna* c);

/*-------------------------
	PROTOTIPO DE FUNCIONES
---------------------------*/
/* Ordena cuaterna: Es una funcion que se encarga de ordenar de menor a mayor los cuatro numeros.
   Recibe:Un apuntador a cuaterna que es donde vamos a guardar los numeros ordenados.
		  La cuaterna a ordenar.
   Regresa: 0 si hay error, 1 si no hay error.
*/
float ordenaCuaterna(cuaterna* auxiliar, const cuaterna* c);
/* Obten el mas grande: Es una funcion que se encarga de obtener el numero mas grande de 4 numeros.
   Recibe:Un apuntador constante a cuaterna, que es la cuaterna de la que queremos el elemento mayor.
   Regresa: El elemento mas grande  de la cuaterna.
*/
float getMasGrande(const cuaterna* c);
/* Obten el mas segundo mas grande: Es una funcion que se encarga de obtener el segundo numero mas grande de 4 numeros.
   Recibe:Un apuntador constante a cuaterna, que es la cuaterna de la que queremos el elemento mayor.
   Regresa: El segundo elemento mas grande  de la cuaterna.
*/
float getSegMasGrande(const cuaterna* c);
/* Obten el mas segundo mas pequenio: Es una funcion que se encarga de obtener el segundo numero mas pequenio de 4 numeros.
   Recibe:Un apuntador constante a cuaterna, que es la cuaterna de la que queremos el segundo elemento mas pequenio.
   Regresa: El segundo elemento mas pequenio de la cuaterna.
*/
float getSegMasPeque(const cuaterna* c);
/* Obten el mas pequenio: Es una funcion que se encarga de obtener el numero mas pequenio de 4 numeros.
   Recibe:Un apuntador constante a cuaterna, que es la cuaterna de la que queremos el elemento mas pequenio.
   Regresa: El elemento mas pequenio de la cuaterna.
*/
float getMasPeque(const cuaterna* c);
/* Cpy cuaterna: Es una funcion que se encarga de copiar dos elementos de tipo cuaterna de manera identica.
   Recibe:Un apuntador constante a cuaterna, y un apuntador constante a otra cuaterna.
   Regresa: 3 en caso de que algun apuntador no apunte a nada.
*/
float cpyCuaterna(cuaterna* auxiliar, const cuaterna* c);
/* A cadena cuaterna: Es una funcion que se encarga de convertir una cuaterna a formato de cadena
   Recibe:Una cadena en donde vamos a guardar el contenido de la cuaterna en formato cadena.
   Regresa: La cadena con la cuaterna en su interior lista para ser imprimida.
*/
char* tostrCua(char*,const cuaterna*);





#endif