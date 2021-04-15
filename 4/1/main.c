#include <stdio.h>
#include "fig.h"

int main(){
  char salida[1000000];
  figura fig1, fig2, fig3, fig4;
  int i,j;
  
  /*Estos for's se usan para variar el ancho y la altura*/
  
	
	printf("FIGURA #5\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			creafig(&fig1,i+3,j+3);/*Crea 5 figuras de diferentes anchos y altos*/
			figura8(salida,&fig1);/*Pinta las diferentes 5 figuras de diverso ancho y alto*/
			printf("alto=%d ancho=%d\n%s\n",i+3,j+3,salida);
		}
		printf("\n");
	}
	
  return 0;
}