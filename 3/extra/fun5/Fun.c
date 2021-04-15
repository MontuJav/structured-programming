#include "Def_Fun.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

float Talla_Homb(float peso)
{
	/*Calcula Talla de Niño*/
	float Talla;
	
	if(peso <= 9.7)
		Talla=74.7;
	else
	{
		if(peso>9.7 && peso<=12.2)
			Talla=86.6;
		else
		{
			if(peso>12.2 && peso<=14.1)
				Talla=95.0;
			else
			{
				if(peso>14.1 && peso<=15.7)
					Talla=101.9;
				else
				{
					if(peso>15.7 && peso<=17.6)
						Talla=107.9;
					else
						Talla=0;
				}
			}
		}
	}
	return Talla;
}

float Talla_Mujer(float peso)
{
	/*Calcula Talla Niña*/
	float Talla;
	
	if(peso <= 9.2)
		Talla=73.5;
	else
	{
		if(peso>9.2 && peso<=11.8)
			Talla=84.9;
		else
		{
			if(peso>11.8 && peso<=13.7)
				Talla=93.7;
			else
			{
				if(peso>13.7 && peso<=15.3)
					Talla=100.8;
				else
				{
					if(peso>15.3 && peso<=17.2)
						Talla=107.1;
					else
						Talla=0;
				}
			}
		}
	}
	return Talla;
}

int Val_Dat(float sexo, float peso)
{
	/*Valida que el sexo ingresado sea correcto y que el peso sea mayor a 0*/
	if(peso>0 && sexo==MUJER||sexo==HOMBRE)
	{		
		/*Si los datos son validos regresa 1*/
		return 1;

	}
	/*Si los datos no son validos regresa 0*/
	return 0;
}

float Asig_Talla(float sexo, float peso)
{
	float Talla;
	int res=Val_Dat(sexo, peso);
	/*Obtiene la validación para iniciar el proceso*/
	if(res==1)
	{
		/*Cuando el sexo= 1 es mujer, cuando el sexo=0 es hombre*/
		if(sexo==MUJER)
		{
			Talla=Talla_Mujer(peso);
		}
		if(sexo==HOMBRE)
		{
			Talla=Talla_Homb(peso);
		}
	}
	else
	{
		/*Si los valores no son validos regresara talla 0*/
		Talla=0;
	}
	return Talla;
}