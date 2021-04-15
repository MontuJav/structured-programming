#include <stdio.h>
#include <stdlib.h>

/*Prototipos*/
int calcula_MCD (const int a, const int b, int* mcd);
int find_q_r(const int a, const int b, int* q, int* r);

int main(){
  
  int a=0, b=0, c=0;
  int q=0,r=0;
  int mcd;
  
  /*RECOPILACION DE DATOS*/
  printf("Ingrese el valor de a: ");
  scanf("%d", &a);
  printf("\nIngrese el valor de b: ");
  scanf("%d", &b);
  printf("\nIngrese el valor de c: ");
  scanf("%d", &c);
  
  /*VALIDACION DE B Y A*/
  if(!((b!=0)||(a!=0))){
	  do{
		  printf("\nIngrese un valor valido para a (no ambos 0): ");
		  scanf("%d", &a);
		  printf("\nIngrese un valor valido para b (no ambos 0): ");
		  scanf("%d", &b);
	  }while((a==0)&&(b==0));
  }
  
  calcula_MCD(a,b,&mcd);
  /*b|-a ssi b|a*/
  find_q_r(abs(c),mcd,&q,&r);
  
  if(r==0){
	  printf("\nLa ecuacion (%d)x+(%d)y=%d tiene soluciones enteras pues (%d,%d)=%d y %d divide a %d", a,b,c,a,b,mcd,mcd,c);
  }
  else{/*r!=0*/
	  printf("\nLa ecuacion (%d)x+(%d)y=%d no tiene en los enteros pues (%d,%d)=%d y %d no divide a %d", a,b,c,a,b,mcd,mcd,c);
  }
  
  return 0;
}

int calcula_MCD (const int a, const int b, int* mcd){
	int a1,b1=0;
	int q,r=0;
	int aux;
	
	*mcd=1;
	
	/*MCD=(a,b)=(|a|,|b|)*/
	a1=abs(a);
	b1=abs(b);
	
	/*Asegurarnos que a1>=b1*/
	if(b1>a1){
		aux=b1;
		b1=a1;
		a1=aux;
	}
	
	if(b1==0)
		*mcd=a1;
	else{
		find_q_r(a1,b1,&q,&r);
		if(r==0)
			*mcd=b1;
		else{
			do{
				a1=b1;
				b1=r;
				find_q_r(a1,b1,&q,&r);
			}while(r!=0);
			*mcd=b1;
		}
	}	
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