/*
 * @authors Equipo docente Programación
 * @project Creación de Materiales Didácticos en la Univer. de Almería (2021-2022)
 * Grados en Ingeniería Elécctrica, Electrónica Industrial, Mecénica y Química industrial
 * @date 2021-02-06


 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAXF  25
#define MAXC  60

/* Prototipos de funciones */
void dibujar_patron_rayas_diagonales(int nf,int nc,int d);

/* definiciones de funciones */
int main(){
	char c;
	int nf,nc,d;

	do{
			printf("PATRON DE RAYAS DIAGONALES\n");
			printf("==========================\n\n");
			do{  printf("Introduzca num de filas: ");
				  scanf(" %d", &nf);
			}while((nf<=0)||(nf>MAXF));
			do{  printf("Introduzca num de columnas: ");
				  scanf(" %d", &nc);
			}while((nf<=0)||(nf>MAXC));
			do{  printf("Introduzca separacion lineas: ");
				  scanf(" %d", &d);
			}while(d<0);
			dibujar_patron_rayas_diagonales(nf,nc,d);
			printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
			scanf(" %c",&c);   
	}while ((c!='N') && (c!='n'));
	return 0;
}

void dibujar_patron_rayas_diagonales(int nf,int nc,int d){
	int i,j;
	int inc;


	if(d<0)
      d=0;
	i=1;
	inc=d+1;
	while(i<=nf){
		j=1;
		while(j<=nc){
			if((j+inc-1)%(d+1))
				printf(" ");
			else printf("*");
			++j;
		}
		++i;
		inc--;
		if(inc==0)  inc=d+1;
		printf("\n");
	}
}
