/******************************************************************************

CRear un programa que permita ingresar por teclado n numeros positivos, y realice
la suma de dichos numeros.

Datos de Entrada
Entero cont=1,cantNum
Real suma=0,numero

Proceso
Escribir "Ingrese la cantidad de numeros:"
Leer cantNum
Mientras(cont<=cantNum)
  Inicio
     Escribir "Ingrese el numero"
     Leer numero
     Mientras(numero<0)
       Inicio
          Escribir "Ingrese el numero"
          Leer numero
       Fin
     suma= suma+numero 
     cont=cont+1
  Fin   
  Escribir "La suma es",suma
  
Salida
Imprimir suma


*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,cantNum;
    float suma=0,numero;
    printf("Ingrese la cantidad de numeros:");
    scanf("%d",&cantNum);
    while(cont<=cantNum)
    {
       printf("Ingrese el numero:");
       scanf("%f",&numero);
       while(numero<0)
       {
          printf("Ingrese un numero positivo:");
          scanf("%f",&numero);
       }
     suma= suma+numero; 
     cont++;
    }   
  printf("La suma es %.1f",suma);
  
}
