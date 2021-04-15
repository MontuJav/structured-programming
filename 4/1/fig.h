#ifndef FIG_H
#define FIG_H

#include <string.h>
#include <stdlib.h>


#define OK     0
#define ERR    1

/*MACROS FIGURAEJEMPLO*/
#define HOR_SUP(i,j,f)  ((i)==0)
#define HOR_INF(i,j,f)  ((i)==(f)->alto-1)
#define VER_IZQ(i,j,f)  ((j)==0)
#define VER_DER(i,j,f)  ((j)==(f)->ancho-1)
#define DIAGONA(i,j,f)  ((i)==(j)*f->alto/f->ancho)
#define MARCO(i,j,f)    HOR_SUP(i,j,f)||HOR_INF(i,j,f)||VER_IZQ(i,j,f)||VER_DER(i,j,f)
#define NOPASMIT(i,j,f) ((i)<=((f)->alto-1)/2)
#define BORDE(i,j,f)    DIAGONA(i,j,f)||MARCO(i,j,f)


#define DIAGONAL(i,j,f)	((i)==(j)*f->alto/f->ancho)
#define DIAGONAL_POSITIVA(i,j,f)	(((j+1)==(int)(((float)(f->alto)-i)*((float)(f->ancho)/(float)(f->alto)))))

/*MACROS FIGURA1*/
/*Macro que compara si un punto esta al la derecha de la diagonal, con pendiente negativa, que forma el cuadrado de altura = alto, base = ancho.*/
#define RANGO_DERECHO_DIAGONAL(i,j,f)	((i)>=(j)*f->alto/f->ancho)

/*MACROS FIGURA2*/
/*Macro que compara si un punto esta al la izquierda de la diagonal, con pendiente positiva, que forma el cuadrado de altura = alto, base = ancho.*/
#define RANGO_IZQUIERDO_DIAGONAL_POSITIVA(i,j,f)	(((j+1)<=(int)(((float)(f->alto)-i)*((float)(f->ancho)/(float)(f->alto)))))

/*MACROS FIGURA3*/
/*Macro que compara si un punto esta al la iquierda de la diagonal, con pendiente negativa, que forma el cuadrado de altura = alto, base = ancho.*/
#define RANGO_IZQUIERDO_DIAGONAL(i,j,f)	((i)<=(j)*f->alto/f->ancho)

/*MACROS FIGURA4*/
/*Macro que compara si un punto esta al la derecha de la diagonal que forma el cuadrado de altura = alto, base = ancho.*/
#define RANGO_DERECHO_DIAGONAL_POSITIVA(i,j,f)	(((j+1)>=(int)(((float)(f->alto)-i)*((float)(f->ancho)/(float)(f->alto)))))

/*MACROS FIGURA5*/
#define RANGO_MEDIA_DIAGONAL(i,j,f)	((i)>=(int)((j-(f->ancho/2.0))*f->alto/(f->ancho/2.0)))
#define RANGO_MEDIA_DIAGONAL_POSITIVA(i,j,f)	(((j+1)<=(int)(((float)(f->alto)-i)*((float)(f->ancho/2.0)/(float)(f->alto)))))
#define RANGO_ESQUINA_SUP_DERECHA(i,j,f)	RANGO_MEDIA_DIAGONAL(i,j,f)&&RANGO_MEDIA_DIAGONAL_POSITIVA(i,j,f)

#define RANGO_MEDIA_DIAGONAL2(i,j,f)	((i)<=(int)((j-(f->ancho/2.0))*f->alto/(f->ancho/2.0)))
#define RANGO_MEDIA_DIAGONAL_POSITIVA2(i,j,f)	(((j+1)>=(int)(((float)(f->alto)-i)*((float)(f->ancho/2.0)/(float)(f->alto)))))
#define RANGO_ESQUINA_SUP_IZQUIERDA(i,j,f)	RANGO_MEDIA_DIAGONAL2(i,j,f)&&RANGO_MEDIA_DIAGONAL_POSITIVA2(i,j,f)

/*MACROS FIGURA6*/
#define RANGO_MEDIA_DIAGONAL3(i,j,f)	((i)>=(int)(((j+1)*(f->alto))/(f->ancho/2.0)))
#define RANGO_MEDIA_DIAGONAL4(i,j,f)	((int)(j-(f->ancho/2.0))>=(int)(((f->ancho/2.0)/(f->alto))*(f->alto-i)))
#define RANGO_TRIANGULO(i,j,f)	RANGO_MEDIA_DIAGONAL4(i,j,f)||RANGO_MEDIA_DIAGONAL3(i,j,f)

/*El tipo figura tiene alto y ancho*/
typedef struct{
  int alto;
  int ancho;
} figura;
/*Constructor del tipo figura*/
int creafig(figura*, int alto, int ancho);

/*Pinta el ejemplo*/
int figura0(char* salida, const figura* f);

/*Pinta la figura1*/
int figura1(char* salida, const figura* f);

/*Pinta la figura2*/
int figura2(char* salida, const figura* f);

/*Pinta la figura3*/
int figura3(char* salida, const figura* f);

/*Pinta la figura4*/
int figura4(char* salida, const figura* f);

/*Pinta la figura5*/
int figura5(char* salida, const figura* f);

/*Pinta la figura6*/
int figura6(char* salida, const figura* f);

/*Pinta la figura7*/
int figura7(char* salida, const figura* f);

/*Pinta la figura 8*/
int figura8(char* salida, const figura* f);


int tria_fig(char* salida,figura* f);
#endif