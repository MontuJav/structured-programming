/*
Definicion de funciones.
*/

#include "Def_Fun.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void Asig_O(float peso, float estatura, char * msj)
{
	int Conf = 0;/*Inicializamos*/
	float IMC=0;
	/*Valida Datos*/
	if(Val_Dat(peso , estatura)==0)
		strcpy(msj,"Datos Erroneos");
	else{
		/*Calcula IMC y Busca el tipo de Obsecidad*/
		IMC= Cal_IMC(peso, estatura);
		Busca_O(IMC,msj);
	}
}

int Val_Dat(float peso , float estatura)
{
	/*Verifica que los datos no sean menores o iguales a 0*/
	if(peso<=0.0 || estatura<=0.0)
		return 0;
	else
		return 1;
} 

float Cal_IMC(float peso, float estatura)
{
	/*Calcula el IMC*/
	float IMC= peso/pow(estatura,2);
	return IMC;
}

void Busca_O(float IMC, char* msj)
{
	if(IMC<16.0)
		strcpy(msj,"Delgadez Severa");		
	else
	{
		if(IMC>=16 && IMC<=16.99)
		{	
					strcpy(msj,"Delgadez Moderada");
		}
				else
				{
					if(IMC>=17 && IMC<=18.49)
					{
						strcpy(msj,"Delgadez Aceptable");
					}
					else
					{
						if(IMC>=18.5 && IMC<=24.99)
						{
							strcpy(msj,"Normal");
						}
						else
						{
							if(IMC==25)
							{
								strcpy(msj,"SobrePeso");
							}
							else
							{
								if(IMC>25 && IMC<=29.99)
								{
									strcpy(msj,"Preobeso");
								}
								else
								{
									if(IMC==30)
									{
										strcpy(msj,"Obeso");
									}
									else
									{
										if(IMC>30 && IMC<=34.99)
										{
											strcpy(msj,"Obeso Tipo 1");
										}
										else
										{
											if(IMC>=35 && IMC<=39.99)
											{
												strcpy(msj,"Obeso Tipo 2");
											}
											else
											{
												if(IMC>=40)
												{
													strcpy(msj,"Obeso Tipo 3");
												}
											}
										}
									}
								}
							}
						}
					}
				}
	}
}

	