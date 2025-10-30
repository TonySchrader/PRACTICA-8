/*Schrader Rodríguez Luis Antonio 
Practica 8 ejercicio 2*/

#include <stdio.h>

int main()
{
  int num, cont = 0;
  
  printf("\a----- Tabla de multiplicar -----\n");
  printf("Ingrese un número: \n");
  scanf("%d", &num);
  printf("La tabla de multiplicar del %d es:\n", num);

  while (++cont <= 10)
    printf("%d x %d = %d\n", num, cont, num*cont);

  return 0;
}
#include <stdio.h>

int main()
{
  /* Al igual que en la estructura if-else, 0 -> falso y diferente de 0 -> verdadero.
  El siguiente es un ciclo infinito porque la condición siempre es verdadera.
  Así mismo, debido a que el ciclo consta de una sola línea, las llaves { } son
  opcionales.*/
  
  while (100)
  {
    printf("Ciclo infinito.\nPara terminar el ciclo presione ctrl + c.\n");
  }
  
  return 0;
}
