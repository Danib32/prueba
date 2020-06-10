/* elaborar un programa que calcule un sueldo en base a diferentes casos 
datos de entrada 
enteros op,edad,genero,horas,tiempo; 
float sueldo,prueba;
proceso 
ingresar tipo de trabajador
ingresar sueldo
validar genero  
ingresar tiempo en la empresa
ingresar horas
so es trabajador de empresa 
 si es mujer o es mayor de 25 años y lleva mas de 30 años en la empresa aumentar su sueldo en 800 dolares si no cumple nada solo aumentar 100 dolares
 si no cumple estos requisitos solo aumentar en 50 dolares 
 si es aspirante
 si tiene mas de 18 años y mas de 85 puntos en la prueba  se contrata caso contrario no se contrata 
 datos de salida 
 en caso de los trbajadores 
 sueldo
 en caso de los aspirantes 
 si es o no contratado
 
*/
#include <stdio.h>

void main(){
	int op,edad,genero,horas,tiempo;//ingreso de variables 
	float sueldo,prueba;//ingreso de variables 
	printf("\t Bienvenido \n");//impresion de texto
	printf(" Ingreses el tipo de trabajador \n 1.Trabajador de empresa \n 2.Aspirante a trabajador \n Escoga una opcion :");//impresion de texto
	scanf("%d",&op);//lectura de la eleccion 
	//evaluacion de la eleccion si es 1 o 2
	if(op==1){
		//ingreso de datos del trabajador 
		printf("\t Trabajador de empresa \n");
		printf(" ingrese su sueldo : ");
		scanf("%f",&sueldo);
		printf("\n ingrese su Genero 1. Mujer y 2. Hombre su genero es :");
		scanf("%d",&genero);
		printf(" ingrese su edad : ");
		scanf("%d",&edad);
		printf(" ingrese su tiempo en la empresa en años(solo enteros) : ");
		scanf("%d",&tiempo);
		printf(" ingrese horas trabajadas (solo enteros) : ");
		scanf("%d",&horas);
	//evaluacion de los datos del trabajador 
		 if(genero==1){
			sueldo=sueldo+800;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		else if(edad>=25 && tiempo>=30){
			sueldo=sueldo+800;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		else if(horas>40 && genero!=1 ){
			sueldo=sueldo+50;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		else{
			sueldo=sueldo+100;
			printf(" su sueldo es: %.2f  ",sueldo);
		}
		
	}
	else if(op==2){
		// ingreso de texto 
		printf("\t Aspirante a trabajador \n");
		printf(" ingrese su edad : ");
		scanf("%d",&edad);// lectura de datos 
		printf(" ingrese su puntuacion en la prueba : ");
		scanf("%f",&prueba);// lectura de datos 
		//evaluacion de datos para la contratacion 
		if (edad > 18 && prueba >85){
			//salida de datos 
			printf(" El aspitrante es contratado ");	
		}
		else{
			//salida de datos 
			printf(" El aspitrante no es contratado por que no cumple los requisitos ");
		}
	
	}
}

