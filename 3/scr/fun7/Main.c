/*
Alumno: Montufar Perez Javier.
Grupo: 1CV1.
El programa regresa el mas pequeño de los 3 numeros mas grandes de una cuaterna.
*/

#include <stdio.h>
#include "OrdenaNum.h"

int main(){
	cuaterna c1,cOrdenada1,c2,cOrdenada2,c3,cOrdenada3,c4,cOrdenada4,c5,cOrdenada5,c6,cOrdenada6;
	char salida[10000];
	iniCuaterna(&c1, 3,5,2,7);
	iniCuaterna(&c2, 11,4,2200,17);
	iniCuaterna(&c3, -34,89,0,7);
	iniCuaterna(&c4, -560,20.4,0,-12);
	iniCuaterna(&c5, 17/4.0,3.1415,2.7,0);
	iniCuaterna(&c6, 1,2,3,4);
	ordenaCuaterna(&cOrdenada1, &c1);
	ordenaCuaterna(&cOrdenada2, &c2);
	ordenaCuaterna(&cOrdenada3, &c3);
	ordenaCuaterna(&cOrdenada4, &c4);
	ordenaCuaterna(&cOrdenada5, &c5);
	ordenaCuaterna(&cOrdenada6, &c6);

	printf("\nDe los numeros: %s",tostrCua(salida,&c1));
	printf("\nEl mas maximo de los 3 mas chicos es: %.2f\n",getSegMasGrande(&c1));
	printf("La cuaterna ordenada es: %s",tostrCua(salida,&cOrdenada1));
	printf("\n\nDe los numeros: %s",tostrCua(salida,&c2));
	printf("\nEl mas maximo de los 3 mas chicos es: %.2f\n",getSegMasGrande(&c2));
	printf("La cuaterna ordenada es: %s",tostrCua(salida,&cOrdenada2));
	printf("\n\nDe los numeros: %s",tostrCua(salida,&c3));
	printf("\nEl mas maximo de los 3 mas chicos es: %.2f\n",getSegMasGrande(&c3));
	printf("La cuaterna ordenada es: %s",tostrCua(salida,&cOrdenada3));
	
	printf("\n\nDe los numeros: %s",tostrCua(salida,&c4));
	printf("\nEl mas maximo de los 3 mas chicos es: %.2f\n",getSegMasGrande(&c4));
	printf("La cuaterna ordenada es: %s",tostrCua(salida,&cOrdenada4));
	printf("\n\nDe los numeros: %s",tostrCua(salida,&c5));
	printf("\nEl mas maximo de los 3 mas chicos es: %.2f\n",getSegMasGrande(&c5));
	printf("La cuaterna ordenada es: %s",tostrCua(salida,&cOrdenada5));
	printf("\n\nDe los numeros: %s",tostrCua(salida,&c6));
	printf("\nEl mas maximo de los 3 mas chicos es: %.2f\n",getSegMasGrande(&c6));
	printf("La cuaterna ordenada es: %s",tostrCua(salida,&cOrdenada6));
	return 0;
}