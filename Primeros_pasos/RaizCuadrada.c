/*
 * @authors Equipo docente Programaci�n
 * @project Creaci�n de Materiales Did�cticos en la Univer. de Almer�a (2021-2022)
 * Grados en Ingenier�a El�ctrica, Electr�nica Industrial, Mec�nica y Qu�mica Industrial
 * @date 2021-02-06

  Este programa muestra el resultado de la expresion (3x^2 + 4y^2)^(1/2)
 */

#include<stdio.h>
#include<math.h>

int main(void){
    float x,y;
    float resultado;

    printf("Introduzca los valores de x e y separados por un espacio en blanco\n");
    scanf(" %f %f",&x,&y);
    resultado=sqrt(3*x*x+4*y*y);
    printf("Resultado expresion: %f\n",resultado);
    return 0;
}
