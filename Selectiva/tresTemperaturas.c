/*
 * @authors Equipo docente Programación
 * @project Creación de Materiales Didácticos en la Univer. de Almería (2021-2022)
 * Grados en Ingeniería Elécctrica, Electrónica Industrial, Mecénica y Química industrial
 * @date 2021-02-06
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
	char c;
	double t1, t2, t3;

	do
	{
		system("cls||clear");
		printf("TRES TEMPERATURAS: COMPROBAR SI COINCIDEN\n");
		printf("=========================================\n\n");
		printf("Introduzca tres temperaturas:\n");
		printf("\tt1: ");
		scanf(" %lf", &t1);
		printf("\tt2: ");
		scanf(" %lf", &t2);
		printf("\tt3: ");
		scanf(" %lf", &t3);
		if (t1 == t2)
			if (t1 == t3)
				printf("\nLas tres temperaturas son iguales");
			else
				printf("\nHay dos temperaturas iguales: t1 y t2");
		else if (t1 == t3)
			printf("\nHay dos temperaturas iguales: t1 y t3");
		else if (t2 == t3)
			printf("\nHay dos temperaturas iguales: t2 y t3");
		else
			printf("\nLas tres temperaturas son distintas");
		printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
		scanf(" %c", &c);
	} while ((c != 'N') && (c != 'n'));
	return 0;
}