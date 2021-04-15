#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Prototipos*/
int encuentra_Secuencia(char*, const int z, const int b);
int find_q_r(const int a, const int b, int* q, int* r);
int strcatChar(char* string, char c);
int strcatInt(char* string, int r);
int Voltea_Secuencia(char* zBase);

int main(){
  
  int z=0, b=0;
  char zBase[1000];
  
  /*RECOPILACION DE DATOS*/
  printf("Ingrese el valor del entero z: ");
  scanf("%d", &z);
  printf("\nIngrese la base b: ");
  scanf("%d", &b);
  
  /*VALIDACION DE LA Z Y B*/
  if(!((z>=0)&&(2<=b)&&(b<=16))){
	  do{
		  printf("\nIngrese un valor valido para el entero z (z>=0): ");
		  scanf("%d", &z);
		  printf("\nIngrese un valor valido de la base b (2<=b<=16): ");
		  scanf("%d", &b);
	  }while((z<0)||(2>b)||(b>16));
  }
  
  encuentra_Secuencia(zBase,z,b);
  Voltea_Secuencia(zBase);
  printf("\n%s representa al entero %d en base %d",zBase,z,b);
  
  return 0;
}

int encuentra_Secuencia(char* zBase, const int z, const int base){
	int a=0,b=0,q=0,r=0;
	strcpy(zBase,"");
	a=z;
	b=base;
	if(z<b)
		strcatInt(zBase, z);
	else{
		find_q_r(a,b,&q,&r);
		strcatInt(zBase, r);
		if(q!=0){
			do{
				a=q;
				find_q_r(a,b,&q,&r);
				strcatInt(zBase, r);
			}while(q!=0);
		}
	}
	
	return 0;
}

/*Concatena un entero a una cadena*/
int strcatInt(char* string, int r){
	char c;
	
	if(r>=10){
		switch(r){
			case 10: c='A';
			break;
			case 11: c='B';
			break;
			case 12: c='C';
			break;
			case 13: c='D';
			break;
			case 14: c='E';
			break;
			case 15: c='F';
			break;
			default: c='M';
		}
	}
	else
		c=r+'0';
	
	char tmp[2];
	tmp[0]=c;
	tmp[1]='\0';
	
	strcat(string, tmp);
	
	return 0;
}

/*Concatena un caracter a una cadena*/
int strcatChar(char* string, char c){
	char tmp[2];
	tmp[0]=c;
	tmp[1]='\0';
	
	strcat(string, tmp);
	
	return 0;
}

int find_q_r(const int a, const int b, int* q, int* r){
	int residuo,counter=0;
	residuo=a;
	if(a<b){
		*q=0;
		*r=a;
	}
	
	else{
		do{
			residuo=residuo-b;
			counter+=1;
		}while(residuo>=b);
	*r=residuo;
	*q=counter;
	}
	return 0;
}

int Voltea_Secuencia(char* zBase){
	int longitud;
	char c;	
	char aux[1000];
	longitud=strlen(zBase);
	int i;
	
	for(i=longitud;i>=0;i--){
		c=zBase[i];
		strcatChar(aux,c);
	}
	
	strcpy(zBase,aux);
	
	return 0;
}