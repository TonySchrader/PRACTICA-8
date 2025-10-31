/*Schrader Rodríguez Luis Antonio 
Practica 8 ejercicio 7 EJERCICIO 4 DEL EXAMEN USANDO "while"*/

#include <stdio.h>

int main() {
    int arregloPares[10];   
    // Arreglo para guardar los 10 primeros números pares

    printf("Arreglo de números pares; \n");

    // Llenado del arreglo con un ciclo FOR
    
    for (int indice = 0; indice < 10; indice++) {
        arregloPares[indice] = (indice + 1) * 2;
    }

    // Impresión del arreglo
    
    printf("Los 10 primeros números pares son:\n");
    for (int indice = 0; indice < 10; indice++) {
        printf("%d ", arregloPares[indice]);
    }
    printf("\n");

    return 0;
}
