#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Def_Fun.h"

int main()
{
	float peso;
	float sexo;
	float Talla;
	
	printf("Si es nino presione 0 \n Si es nina presione 1 \n");
	scanf("%f", &sexo);
	printf("Ingrese su peso \n");
	scanf("%f", &peso);
	
	Talla=Asig_Talla(sexo,peso);
	if(Talla==0)
	{
		printf("Datos ingresados fuera del rango");
	}
	else
	{
		printf("Su talla es: %f", Talla);
	}
	
}