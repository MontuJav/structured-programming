#include "fig.h"

int creafig(figura* f, int alto, int ancho){
  if(!(f!=NULL))
	return ERR;
  f->alto  = alto;
  f->ancho = ancho;
  return OK;
}

int figura0(char* salida, const figura* f){
  int i,j;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;

  strcpy(salida,"");
  
  for(i=0;i<f->alto;i++){
	for(j=0;j<f->ancho;j++)
	  if(BORDE(i,j,f))
		strcat(salida,"*");
	  else
		strcat(salida," ");
    strcat(salida,"\n");
  }
  strcat(salida,"\n");
  return OK;
}

int figura1(char* salida, const figura* f){
  int i,j;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;

  strcpy(salida,"*\n");
  
  for(i=1;i<f->alto;i++){
	for(j=0;j<f->ancho;j++)
	  if(RANGO_DERECHO_DIAGONAL(i,j,f))
		strcat(salida,"*");
	  else
		strcat(salida," ");
    strcat(salida,"\n");
  }
  strcat(salida,"\n");
  return OK;
}

int figura2(char* salida, const figura* f){
  int i,j;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;
  strcpy(salida,"");
  
  for(i=0;i<f->alto-1;i++){
	for(j=0;j<f->ancho;j++)
	  if(RANGO_IZQUIERDO_DIAGONAL_POSITIVA(i,j,f))
		strcat(salida,"*");
	  else
		strcat(salida," ");
    strcat(salida,"\n");
  }
  strcat(salida,"*");
  
 }

int figura3(char* salida, const figura* f){
  int i,j;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;
  
  strcpy(salida,"");
  
  for(i=0;i<f->alto-1;i++){
	for(j=0;j<f->ancho;j++)
	  if(RANGO_IZQUIERDO_DIAGONAL(i,j,f))
		strcat(salida,"*");
	  else
		strcat(salida," ");
    strcat(salida,"\n");
  }
  for(j=0;j<f->ancho-1;j++)
	  strcat(salida," ");
  strcat(salida,"*\n");
  return OK;
}

int figura4(char* salida, const figura* f){
  int i,j;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;

  strcpy(salida,"");
  
  for(j=0;j<f->ancho-1;j++)
	  strcat(salida," ");
  strcat(salida,"*\n");
  
  for(i=1;i<f->alto;i++){
	for(j=0;j<f->ancho;j++){
	  if(RANGO_DERECHO_DIAGONAL_POSITIVA(i,j,f))
		strcat(salida,"*");
	  else
		strcat(salida," ");
	}
    strcat(salida,"\n");
  }
  
  strcat(salida,"\n");
  return OK;
}

int figura5(char* salida, const figura* f){
  int i,j;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;

  strcpy(salida,"");
  
  for(j=0;j<f->ancho/2;j++)
	  strcat(salida," ");

  strcat(salida,"*\n");
  /*Los dos ifs encierran dos reguiones del rectangulo donde deben ir espacios, no * .*/
  for(i=1;i<f->alto-1;i++){
	for(j=0;j<f->ancho;j++){
	  if(RANGO_ESQUINA_SUP_DERECHA(i,j,f)||RANGO_ESQUINA_SUP_IZQUIERDA(i,j,f))
		strcat(salida," ");
	  else
		strcat(salida,"*");
	}
    strcat(salida,"\n");
  }
  for(j=0;j<f->ancho;j++)
	  strcat(salida,"*");
  
  strcat(salida,"\n");
  return OK;
}

int figura6(char* salida, const figura* f){
  int i,j;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;

  strcpy(salida,"");
  
  for(j=0;j<f->ancho;j++)
	  strcat(salida,"*");
  strcat(salida,"\n");
  
  for(i=1;i<f->alto-1;i++){
	for(j=0;j<f->ancho;j++)
	  if(RANGO_TRIANGULO(i,j,f))
		strcat(salida," ");
	  else
		strcat(salida,"*");
    strcat(salida,"\n");
  }
  for(j=0;j<f->ancho/2;j++)
	  strcat(salida," ");
  strcat(salida,"*\n");
  
  strcat(salida,"\n");
  return OK;
}

int figura7(char* salida, const figura* f){
  int i,j,altura1,altura2,ancho1,longitud;
  char aux1[10000];
  char aux2[10000];
  figura parte1, parte2;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;
  strcpy(salida,"");
  
  altura1=((f->alto-1)/2);
  altura2=altura1;
  
  creafig(&parte1,altura1,f->ancho-1);
  creafig(&parte2,altura2,f->ancho-1);
  
  figura1(aux1,&parte1);
  figura2(aux2,&parte2);
  
  /*Quitamos los espacios entre parte 1 y parte 2*/
  longitud=strlen(aux1);
  aux1[longitud]='\0';
  aux1[longitud-1]='\0';
  
  strcpy(salida, aux1);
  
  for(j=0; j<f->ancho; j++)
	  strcat(salida, "*");
  strcat(salida, "\n");
  
  strcat(salida, aux2);

  return OK;
}

int figura8(char* salida, const figura* f){
  int i,j,altura1,altura2,ancho1,longitud,longitud2;
  char aux1[10000];
  char aux2[10000];
  figura parte1, parte2;
  
  if(!(salida!=NULL && f!=NULL))
	return ERR;
  strcpy(salida,"");
  
  altura1=((f->alto)/2);
  altura2=(f->alto)-altura1;
  
  creafig(&parte1,altura1,f->ancho);
  creafig(&parte2,altura2,f->ancho-1);
  
  figura4(aux1,&parte1);
  figura3(aux2,&parte2);
  
  /*Quitamos los espacios entre parte 1 y parte 2*/
  longitud=strlen(aux1);
  aux1[longitud]='\0';
  aux1[longitud-1]='\0';

  strcpy(aux2," ");
  
  for(i=0;i<parte2.alto-1;i++){
	for(j=0;j<parte2.ancho;j++)
	  if(RANGO_IZQUIERDO_DIAGONAL(i,j,f))
		strcat(aux2,"*");
	  else
		strcat(aux2," ");
    strcat(aux2,"\n ");
  }
  for(j=0;j<parte2.ancho-1;j++)
	  strcat(aux2," ");
  strcat(aux2,"*\n");

  
  strcpy(salida, aux1);
  
  strcat(salida, aux2);

  return OK;
}


int refleja(char* salida, const figura* f, char* cad_figura){
	int i,j,altura,ancho;
	char* parte1, parte2;
	
	strcpy(parte1,cad_figura);
	strcpy(parte2,cad_figura);
	
	altura=f->alto;
	ancho1=f->ancho/2;
	ancho2=f->ancho-ancho1;
	
	for(i=0;i<altura;i++){
		for(j=0;j<ancho1;j++){
			if(aux1[j]=='*'){
				aux[j]=' '
			}
				
		}
	}
	
	
	
	
	
}
