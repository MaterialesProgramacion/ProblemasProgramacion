/*
 * @authors Equipo docente Programaci�n
 * @project Creaci�n de Materiales Did�cticos en la Univer. de Almer�a (2021-2022)
 * Grados en Ingenier�a El�ctrica, Electr�nica Industrial, Mec�nica y Qu�mica Industrial
 * @date 2021-02-06

  Este programa saludara al usuario incorporando su nombre y apellidos al saludo
 */

#include <stdio.h>

int main(){
	char nombre[30];

	printf("Por favor, introduzca su nombre: ");
	scanf(" %[^\n]s",nombre);
	printf("\n\nSaludos D. %s", nombre);
	printf("\nBienvenido al fantastico mundo de la programacion");
	printf("\n\nPulse una tecla para finalizar");
	getchar();
	return 0;
}
