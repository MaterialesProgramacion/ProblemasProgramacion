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
#define FIJO 30
#define T1 15
#define T2 10

int main()
{
	char c;
	float km, total;

	do
	{
		system("cls||clear");
		printf("TARIFA TAXI\n");
		printf("===========\n\n");
		printf("Introduzca kms recorridos: ");
		scanf(" %f", &km);
		if (km <= 0)
		{
			printf("Error: datos de E no validos");
		}
		else
		{
			if (km <= 30)
			{
				total = FIJO;
			}
			else
			{
				if (km <= 100)
				{
					total = FIJO + (km - 30) * T1;
				}
				else
				{
					total = FIJO + (100 - 30) * T1 + (km - 100) * T2;
				}
			}
			printf("\nTotal a pagar: %.1f", total);
		}
		printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
		scanf(" %c", &c);
	} while ((c != 'N') && (c != 'n'));
	return 0;
}