#ifndef ORDENA5NUM_H
#define ORDENA5NUM_H

/*
Función para el calculo del mas grande de los 4 parametros mas pequenios.
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
#define Min5Num(x,y,z,a,b)	(Min4Num(x,y,z,a)<=b?Min4Num(x,y,z,a):b)

#define Max2Num(x,y)		(x>=y?x:y)
#define Max3Num(x,y,z)		(Max2Num(x,y)>=z?Max2Num(x,y):z)
#define Max4Num(x,y,z,a)	(Max3Num(x,y,z)>=a?Max3Num(x,y,z):a)
#define Max5Num(x,y,z,a,b)	(Max4Num(x,y,z,a)>=b?Max4Num(x,y,z,a):b)

#define Med3Num(x,y,z)		(Min2Num(Max2Num(x,y),z))


/*-------------------------
	DEFINICIONES DE TIPOS
---------------------------*/
/* Definimos al tipo quiterna, que como su nombre lo indica esta compuesta por 5 numeros flotantes */
typedef struct{
	float n1;
	float n2;
	float n3;
	float n4;
	float n5;
}quinterna;

/*-------------------------
	CONSTRUCTOR TIPOS
---------------------------*/
/* Definimos a la funcion constructora del tipo quinterna */
float iniQuinterna(quinterna*, float n1, float n2, float n3, float n4, float n5);

/*-------------------------
	SETS Y GETS DE LOS TIPOS
---------------------------*/
/* Definimos a los sets y gets de cada elemento de la quinterna */
float setN1(quinterna* c, float valor);
float setN2(quinterna* c, float valor);
float setN3(quinterna* c, float valor);
float setN4(quinterna* c, float valor);
float setN5(quinterna* c, float valor);

float getN1(const quinterna* c);
float getN2(const quinterna* c);
float getN3(const quinterna* c);
float getN4(const quinterna* c);
float getN5(const quinterna* c);

/*-------------------------
	PROTOTIPO DE FUNCIONES
---------------------------*/
/* Ordena quinterna: Es una funcion que se encarga de ordenar de menor a mayor los cinco numeros.
   Recibe:Un apuntador a quinterna que es donde vamos a guardar los numeros ordenados.
		  La quinterna a ordenar.
   Regresa: 0 si hay error, 1 si no hay error.
*/
float ordenaQuinterna(quinterna* auxiliar, const quinterna* c);
/* Obten el medio: Es una funcion que se encarga de obtener el numero medio de la quinterna.
   Recibe:Un apuntador constante a quinterna, que es la quinterna de la que queremos el elemento medio.
   Regresa: El elemento medio de la quinterna.
*/
float calculaMedio(float aux1,float aux2,float aux4,float aux5, float x1, float x2, float x3, float x4, float x5);
/*Obtenemos el elemento mas pequenio d ela quinterna*/
float getPrimer(const quinterna* c);
/*Obtenemos el segundo elemento mas pequenio de la quinterna*/
float getSegundo(const quinterna* c);
/*Obtenemos el elemento medio de la quinterna*/
float getTercero(const quinterna* c);
/*Obtenemos el segundo elemento mas grande de la quinterna*/
float getCuarto(const quinterna* c);
/*Obtenemos el elemento mas grande de la quinterna*/
float getQuinto(const quinterna* c);
/*Copiamos una quinterna identica a otra dada*/
float cpyQuinterna(quinterna* auxiliar, const quinterna* c);
char* tostrQui(char*,const quinterna*);





#endif