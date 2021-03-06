/*
 * @authors Equipo docente Programación
 * @project Creación de Materiales Didácticos en la Univer. de Almería (2021-2022)
 * Grados en Ingeniería Elécctrica, Electrónica Industrial, Mecénica y Química industrial
 * @date 2021-02-06
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char c;
	float fah, cel;

	do
	{
		printf("CONVERSION DE GRADOS CENTIGRADOS A FAHRENHEIT\n");
		printf("=============================================\n\n");
		printf("Introduzca temperatura (grados celsius): ");
		scanf(" %f", &cel);
		fah = 9 * cel / 5 + 32;
		printf("\nTemperatura (grados fahrenheit): %.1f", fah);
		printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
		scanf(" %c", &c);
	} while ((c != 'N') && (c != 'n'));
	return 0;
}