/*Schrader Rodríguez Luis Antonio 
Practica 8 ejercicio 6 EJERCICIO 14 DE LA SERIE USANDO "for"*/

#include <stdio.h>

int main() {
    int enteroNumAlumnos;         
        // Número de alumnos
    float realCalif = 0.0, realPromedio = 0.0;   
        // Variables para almacenar calificaciones y promedio

    printf("Promedio de calificaciones \n");
    printf("Ingrese el número total de alumnos: ");
    scanf("%d", &enteroNumAlumnos);

    for (int indice = 0; indice < enteroNumAlumnos; indice++) {
        printf("\nIngrese la calificación del alumno %d: ", indice + 1);
        scanf("%f", &realCalif);
        realPromedio += realCalif;
    }

    printf("\nEl promedio de las calificaciones ingresadas es: %.2f\n", realPromedio / enteroNumAlumnos);

    return 0;
}


