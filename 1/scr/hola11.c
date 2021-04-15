#include <stdio.h> //Incluimos la libreria stdio.h

int main(){
	char* mensaje= "Hola a %s"; //El %s lo podemos poner en mensaje
	printf(mensaje, "todos\n");
	return 0;
}