// Crear un programa que nos permita ingresar el nombre y la edad de la persona y su edad y verifique si es mayor de edad//
#include<stdio.h>
void main()
{
	int edad;
	char nombre [50];// definicion de variable de cadena de cararteres en C
	printf("Ingrese su nombre \n" );
	gets(nombre);// para que tome el "espacio" como caracter unicamete "gets "solo sirve para cadena de caractetres [string]
	printf("Ingrese su edad \n" );
	scanf("%d",&edad);
	if(edad>=18){
		printf(" %s es mayor de edad",nombre);	
	}else{
		printf(" %s no es mayor de edad",nombre);// salida de datos %s pertenece al tipo string(cadena de cararteres)
	}
	
}
