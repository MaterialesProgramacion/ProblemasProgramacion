/*
 * @authors Equipo docente Programación
 * @project Creación de Materiales Didácticos en la Univer. de Almería (2021-2022)
 * Grados en Ingeniería Eléctrica, Electrónica Industrial, Mecánica y Química Industrial
 * @date 2021-02-06
 */
/* Programa que calcula la longitud de una cadena   */


#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define N 50		/* longitud maxima de las cadenas de entrada 	*/

/* Nuevos tipos de datos */
typedef char cadena50[N+1];

/* Prototipos de funciones */
int longitud_cadena(char *cad);
void leer_cadena(char *c, int n);

int main(){
	cadena50 cad;			/* cadena */
	char c;

	do{ 	      system("cls||clear");
			printf("LONGITUD DE UNA CADENA DE CARACTERES\n");
			printf("======================================\n\n");
			printf("Introduzca cadena: ");
			leer_cadena(cad,N);
			printf("\nLongitud: %d",longitud_cadena(cad));
			printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
		scanf(" %c",&c);   
	}while ((c!='N') && (c!='n'));
	return 0;
}

int longitud_cadena(char *cad){
	int i;		/* contador de caracteres			*/

	i=0;
	while(cad[i]!='\0')
	  ++i;
	return i;
}

void leer_cadena(char *cad, int n){
/* lee por teclado y devuelve una cadena de hasta n caracteres */
	int i,fin;
	char c;

	i=0;
	fin=0;
	while((i<n)&&(!fin)){
		c=getche();
		if(c!='\r'){
			cad[i]=c;
			++i;
		}else fin=1;
	}
	cad[i]='\0';
}