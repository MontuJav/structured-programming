/*
Definicion de funciones.
*/

#include <stdio.h>
#include "cuentaVocales.h"

int cuentaVocales(const char a,const char b,const char c){
	int acum=0;

	if(esVocal(a))
		acum++;
	if(esVocal(b))
		acum++;
	if(esVocal(c))
		acum++;
	
	return acum;
}

int cuentaConsonantes(const char a,const char b,const char c){
	int acum=0;
	
	if(esConsonante(a))
		acum++;
	if(esConsonante(b))
		acum++;
	if(esConsonante(c))
		acum++;
	return acum;
}

int cuentaNoLetras(const char a,const char b,const char c){
	int acum=0;
	
	if(noEsLetra(a))
		acum++;
	if(noEsLetra(b))
		acum++;
	if(noEsLetra(c))
		acum++;
	
	return acum;
}

int valorEnTabla(const tabla* t, const char a, const char b, const char c){
	int valorDeTabla=0;
	int fila = 0;
	int columna = 0;
	fila = cuentaVocales(a, b, c);
	columna = cuentaConsonantes(a, b, c);
	valorDeTabla = getValor(t, fila, columna);
	if(!(valorDeTabla!=ERROR))
		return ERROR;
	return valorDeTabla;
		
	
}

int getValor(const tabla* t, int fila, int columna){
	int valor = 0;
	
	if(fila==0)
		valor = mapeaEnF0(t, columna);
	else if(fila==1)
		valor = mapeaEnF1(t, columna);
	else if(fila==2)
		valor = mapeaEnF2(t, columna);
	else if(fila==3)
		valor = mapeaEnF3(t, columna);
	else
		return ERROR;
	return valor;
}

int mapeaEnF0(const tabla* t, int columna){
	int valor = 0;
	
	if(columna==0)
		valor = getf0c0(t);
	else if(columna==1)
		valor = getf0c1(t);
	else if(columna==2)
		valor = getf0c2(t);
	else if(columna==3)
		valor = getf0c3(t);
	else
		return ERROR;
	return valor;
}

int mapeaEnF1(const tabla* t, int columna){
	int valor = 0;
	
	if(columna==0)
		valor = getf1c0(t);
	else if(columna==1)
		valor = getf1c1(t);
	else if(columna==2)
		valor = getf1c2(t);
	else if(columna==3)
		valor = getf1c3(t);
	else
		return ERROR;
	return valor;
}

int mapeaEnF2(const tabla* t, int columna){
	int valor = 0;
	
	if(columna==0)
		valor = getf2c0(t);
	else if(columna==1)
		valor = getf2c1(t);
	else if(columna==2)
		valor = getf2c2(t);
	else if(columna==3)
		valor = getf2c3(t);
	else
		return ERROR;
	return valor;
}

int mapeaEnF3(const tabla* t, int columna){
	int valor = 0;
	
	if(columna==0)
		valor = getf3c0(t);
	else if(columna==1)
		valor = getf3c1(t);
	else if(columna==2)
		valor = getf3c2(t);
	else if(columna==3)
		valor = getf3c3(t);
	else
		return ERROR;
	return valor;
}	


/*---------------------------------------------
	SETS, GETS Y CONSTRUCTOR DE LOS TIPOS
-----------------------------------------------*/

int iniTabla(tabla* t, int f0c0, int f0c1, int f0c2, int f0c3, int f1c0, int f1c1,int f1c2, int f1c3, int f2c0, int f2c1, int f2c2, int f2c3,int f3c0, int f3c1, int f3c2, int f3c3){
	
	if(!(APVAL(t))) /* Valida el apuntador */
		return APINV;

	t->fila0col0=f0c0;
	t->fila0col1=f0c1;
	t->fila0col2=f0c2;
	t->fila0col3=f0c3;
	
	t->fila1col0=f1c0;
	t->fila1col1=f1c1;
	t->fila1col2=f1c2;
	t->fila1col3=f1c3;
	
	t->fila2col0=f2c0;
	t->fila2col1=f2c1;
	t->fila2col2=f2c2;
	t->fila2col3=f2c3;
	
	t->fila3col0=f3c0;
	t->fila3col1=f3c1;
	t->fila3col2=f3c2;
	t->fila3col3=f3c3;

	return OK;
}

int getf0c0(const tabla* t){
	int valor = 0;
	valor=t->fila0col0;
	return valor;
}

int getf0c1(const tabla* t){
	int valor = 0;
	valor=t->fila0col1;
	return valor;
}

int getf0c2(const tabla* t){
	int valor = 0;
	valor=t->fila0col2;
	return valor;
}

int getf0c3(const tabla* t){
	int valor = 0;
	valor=t->fila0col3;
	return valor;
}

int getf1c0(const tabla* t){
	int valor = 0;
	valor=t->fila1col0;
	return valor;
}

int getf1c1(const tabla* t){
	int valor = 0;
	valor=t->fila1col1;
	return valor;
}

int getf1c2(const tabla* t){
	int valor = 0;
	valor=t->fila1col2;
	return valor;
}

int getf1c3(const tabla* t){
	int valor = 0;
	valor=t->fila1col3;
	return valor;
}

int getf2c0(const tabla* t){
	int valor = 0;
	valor=t->fila2col0;
	return valor;
}

int getf2c1(const tabla* t){
	int valor = 0;
	valor=t->fila2col1;
	return valor;
}

int getf2c2(const tabla* t){
	int valor = 0;
	valor=t->fila2col2;
	return valor;
}

int getf2c3(const tabla* t){
	int valor = 0;
	valor=t->fila2col3;
	return valor;
}

int getf3c0(const tabla* t){
	int valor = 0;
	valor=t->fila3col0;
	return valor;
}

int getf3c1(const tabla* t){
	int valor = 0;
	valor=t->fila3col1;
	return valor;
}

int getf3c2(const tabla* t){
	int valor = 0;
	valor=t->fila3col2;
	return valor;
}

int getf3c3(const tabla* t){
	int valor = 0;
	valor=t->fila3col3;
	return valor;
}


int setf0c0(tabla* t, int valor){
	t->fila0col0=valor;
	return 0;
}

int setf0c1(tabla* t, int valor){
	t->fila0col1=valor;
	return 0;
}

int setf0c2(tabla* t, int valor){
	t->fila0col2=valor;
	return 0;
}

int setf0c3(tabla* t, int valor){
	t->fila0col3=valor;
	return 0;
}

int setf1c0(tabla* t, int valor){
	t->fila1col0=valor;
	return 0;
}

int setf1c1(tabla* t, int valor){
	t->fila1col1=valor;
	return 0;
}

int setf1c2(tabla* t, int valor){
	t->fila1col2=valor;
	return 0;
}

int setf1c3(tabla* t, int valor){
	t->fila1col3=valor;
	return 0;
}

int setf2c0(tabla* t, int valor){
	t->fila2col0=valor;
	return 0;
}

int setf2c1(tabla* t, int valor){
	t->fila2col1=valor;
	return 0;
}

int setf2c2(tabla* t, int valor){
	t->fila2col2=valor;
	return 0;
}

int setf2c3(tabla* t, int valor){
	t->fila2col3=valor;
	return 0;
}

int setf3c0(tabla* t, int valor){
	t->fila3col0=valor;
	return 0;
}

int setf3c1(tabla* t, int valor){
	t->fila3col1=valor;
	return 0;
}

int setf3c2(tabla* t, int valor){
	t->fila3col2=valor;
	return 0;
}

int setf3c3(tabla* t, int valor){
	t->fila3col3=valor;
	return 0;
}