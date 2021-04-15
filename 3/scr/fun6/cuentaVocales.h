#ifndef VOCALES_H
#define VOCALES_H

/*
Función para el calculo de vocales y consonantes.
*/
/*-------------------------
	CONSTANTES
---------------------------*/

/*-------------------------
	CONSTANTES DE ERROR
---------------------------*/
#define OK           0 /*Sin Error*/
#define ERROR        1 /*Si tratamos de obtener un elemento invalido de la tabla*/
#define APINV        3 /*Si recibe apuntador invalido*/
#define TAMANIOINV   4 /*Si recibe un tamanio invalido*/
/*-------------------------
	MACROS REQUERIDAS
---------------------------*/

#define APVAL(p)     ((p)!=NULL) /*Valida apuntadores*/

#define esMay(x)			((x>='A')&&(x<='Z'))
#define esMin(x)			((x>='a')&&(x<='z'))
#define esVocalMin(x)		((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
#define esVocalMay(x)		((x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U'))

#define esVocal(x)			((esVocalMay(x))||(esVocalMin(x)))
#define esConsonante(x)		((esLetra(x))&&(!esVocal(x)))

#define esLetra(x)			(((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z')))
#define noEsLetra(x)		(!esLetra(x))




/*-------------------------
	DEFINICIONES DE TIPOS
---------------------------*/
/* 
   Definimos una estructura llamada tabla que tendra valores que podemos configurar, esta tabala solo
   tendra 3 filas y 3 columnas.
 */
typedef struct{
	int fila0col0;
	int fila0col1;
	int fila0col2;
	int fila0col3;
	
	int fila1col0;
	int fila1col1;
	int fila1col2;
	int fila1col3;
	
	int fila2col0;
	int fila2col1;
	int fila2col2;
	int fila2col3;
	
	int fila3col0;
	int fila3col1;
	int fila3col2;
	int fila3col3;
}tabla;

/*-------------------------
	CONSTRUCTOR TIPOS
---------------------------*/
/* Definimos a la funcion constructora del tipo tabla */
int iniTabla(tabla*, int fila0col0, int fila0col1, int fila0col2, int fila0col3,int fila1col0, int fila1col1, int fila1col2, int fila1col3,int fila2col0, int fila12col1, int fila2col2, int fila2col3,int fila3col0, int fila13col1, int fila3col2, int fila3col3);

/*-------------------------
	SETS Y GETS DE LOS TIPOS
---------------------------*/
/* Definimos a los sets y gets de cada celda de la tabla */
int setf0c0(tabla* t, int valor);
int setf0c1(tabla* t, int valor);
int setf0c2(tabla* t, int valor);
int setf0c3(tabla* t, int valor);
int setf1c0(tabla* t, int valor);
int setf1c1(tabla* t, int valor);
int setf1c2(tabla* t, int valor);
int setf1c3(tabla* t, int valor);
int setf2c0(tabla* t, int valor);
int setf2c1(tabla* t, int valor);
int setf2c2(tabla* t, int valor);
int setf2c3(tabla* t, int valor);
int setf3c0(tabla* t, int valor);
int setf3c1(tabla* t, int valor);
int setf3c2(tabla* t, int valor);
int setf3c3(tabla* t, int valor);

int getf0c0(const tabla* t);
int getf0c1(const tabla* t);
int getf0c2(const tabla* t);
int getf0c3(const tabla* t);
int getf1c0(const tabla* t);
int getf1c1(const tabla* t);
int getf1c2(const tabla* t);
int getf1c3(const tabla* t);
int getf2c0(const tabla* t);
int getf2c1(const tabla* t);
int getf2c2(const tabla* t);
int getf2c3(const tabla* t);
int getf3c0(const tabla* t);
int getf3c1(const tabla* t);
int getf3c2(const tabla* t);
int getf3c3(const tabla* t);


/*-------------------------
	PROTOTIPO DE FUNCIONES
---------------------------*/

/* Cuenta vocales: Recibe 3 caracteres y cuenta cuantos de ellos son letras y vocales
   Recibe:3 caracteres
   Regresa: numero de vocales
*/
int cuentaVocales(const char,const char,const char);
/* Cuenta consonantes: Recibe 3 caracteres y cuenta cuantos de ellos son letras y consonantes
   Recibe:3 caracteres
   Regresa: numero de consonantes
*/
int cuentaConsonantes(const char,const char,const char);
/* Cuenta no letras: Recibe 3 caracteres y cuenta cuantos de ellos no son letras
   Recibe:3 caracteres
   Regresa: numero de no letras
*/
int cuentaNoLetras(const char,const char,const char);
/* Valor en tabla: Recibe una tabla que debe estar previamente inicializada.
   Posteriormente, cuenta el numero de vocales y consonantes que recibe y le da un peso al conteo comparando con la tabla.
   Recibe:1 tabla, 3 caracteres.
   Regresa: El valor en tabla
*/
int valorEnTabla(const tabla* t, const char a, const char b, const char c);
/* Cuenta vocales: Busca el valor que contiene un celda de la tabla dada su celda y su fila.
   Recibe:1 objeto tabla, la fila y la columna.
   Regresa: un valor en funcon del numero de vocales y consonantes que han sido contadas previmente.
*/
int getValor(const tabla* t, int fila, int columna);
/* Mapea en F0: Es una funcion que se ocupa en otra funcion "valor en tabla" 
   y ayuda a mapear el peso en la fila 0 de la tabla.
   Recibe:3 caracteres
   Regresa: el valor de la celda buscada.
*/
int mapeaEnF0(const tabla* t, int columna);
/* Mapea en F1: Es una funcion que se ocupa en otra funcion "valor en tabla" 
   y ayuda a mapear el peso en la fila 1 de la tabla.
   Recibe:3 caracteres
   Regresa: el valor de la celda buscada.
*/
int mapeaEnF1(const tabla* t, int columna);
/* Mapea en F2: Es una funcion que se ocupa en otra funcion "valor en tabla" 
   y ayuda a mapear el peso en la fila 2 de la tabla.
   Recibe:3 caracteres
   Regresa: el valor de la celda buscada.
*/
int mapeaEnF2(const tabla* t, int columna);
/* Mapea en F3: Es una funcion que se ocupa en otra funcion "valor en tabla" 
   y ayuda a mapear el peso en la fila 3 de la tabla.
   Recibe:3 caracteres
   Regresa: el valor de la celda buscada.
*/
int mapeaEnF3(const tabla* t, int columna);





#endif