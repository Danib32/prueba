/******************************************************************************

Crear un programa que permita ingresar n notas para un estudiante y determine
su promedio

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cantNotas,cont=1;
    float notas,suma=0,prom=0;
    char nombre[10];
    printf("Ingrese el nombre:");
    gets(nombre);
    printf("Ingrese la cantidad de notas:");
    scanf("%d",&cantNotas);
    while(cont<=cantNotas)
    {
            printf("Ingrese la calificación:");
            scanf("%f",&notas);
            while(notas<0 || notas>10)
            {
              printf("Ingrese una calificación positiva o notas entre 1 y 10:");
              scanf("%f",&notas);      
            }
            suma=suma+notas;
            cont++;
    }
    prom=suma/cantNotas;
    printf("%s tiene un promedio de %.2f\n",nombre,prom);
    if(prom>=6)
    {
            printf("%s aprueba la materia\n",nombre);
    }
    else
    {
            printf("%s reprueba la materia\n",nombre);
    }
    
    
    
}
