/*
GRUPO 1
Crear un programa que permita determinar la cantidad de numeros impares que tiene el programa.
Datos de entrada 
	entero catidad de numeros a ingresar,contador de repeticiones , contador de numeros impares, variable que almacene el numero inngresado;
proceso 
	 mientras el contador sea menor o igual a la cantaida de numeros hacer 
		escribir ingrse el numero #
		leer in;
		si in al dividerilo para 2 y su residuo es distinto de 0 entonces 
		contador de impares incremenatdo;	
		fin si 
		contador de repeticiones incrementado;
	fin mientras
	Escribir hay # numeros impares;
datos de salida 
	cantidad de numeros impares
*/
#include<stdio.h>
#include<stdlib.h>
void  vmatematicas (float , float );
void  rmatematicas (float *, float *);
void  nnuerosp (int *);
//prototipo de la funcion de numeros impares
int  impares (int *);
//funcion principal
void main(){
	int op;
	float a,b;
	int n,num;
    while (op !=4){
    	
    	printf("\n \t \t BIENVENIDO \n");
	printf("\t Menu de opciones : \n");
	printf("1. Suma de numeros paso por valor y por referencia\n2. Serie N Pares\n3.Cantidad de numeros impares de un programa\n4. Salir\n");
	printf("Escoja una de las opciones :  ");
	scanf("%d",&op);
	switch(op){
		case 1:
				printf("ingrese numero 1 y numero 2\n");
				scanf("%f %f",&a,&b);
				printf("*********************************************************************************************\n");
				printf(" los numeros ingresados son el primero es %.1f y el segundo es  %.1f \n",a,b);
				vmatematicas (a,b);
				printf("paso por valor\n");
				printf(" la suma  es= %.1f y la resta es=%.1f \n",a,b);
				printf("paso por referencia \n");
				rmatematicas (&a,&b);
				printf("la suma es= %.1f y la resta es=%.1f \n",a,b);
				system("pause");
				system("cls");  
  		break;
        case 2:
        		printf("ingrese limite de n numeros : ");
				scanf("%d",&n);
				while (n<=0){
				        printf("ERROR!: Ingrese un entero positivo\n Ingrese cantidad de numeros: ");
				        scanf("%d",&n);
				      }
				nnuerosp(&n);
            	system("pause");
				system("cls");  
            break;
            //programa que determina cuantos numeros impares hay en un programa 
        case 3:
        		printf("ingrese catidad de numeros : ");//solicitud de datos 
				scanf("%d",&num);//ingreso de datos
				while (num<=0){//validacion de datos ingresados
				        printf("ERROR!: Ingrese un entero positivo\n Ingrese cantidad de numeros: ");
				        scanf("%d",&num);
				      }
				    //llamada a la funcion 
				printf("hay %d numeros impares \n",impares(&num));//salida de datos
            	system("pause");
				system("cls");  
            break;
        case 4:
        		printf(" Hasta pronto \n" );
            	exit(0);
            	system("pause");
				system("cls");  
            break;
		
		default:
		printf("\n  Opcion invalida\nintentenlo de nuevo\n" );
		system("pause");
		system("cls");  
		break;				
		
	}
	}	
}
void  vmatematicas  (float a, float b){
	a=a+b;
	b=a-b;
}
void  rmatematicas(float *a, float *b){
	float aux=*a; 
	*a=(*a)+(*b);
	*b=(aux)-(*b);
}
void nnuerosp(int *n){
	int cont=0,suma=0;
	printf("la sucecion es \n");
	while (cont<*n){
		suma=suma+2;
		printf("%d \n",suma);
		cont++;
	}	
}
//implementacion de la funcion de numeros impares 
int  impares (int *num){
	//definicion de variables necesesarias para el correcto funcionamiento de la funcion 
	int cont=1,imp=0,in;
	//condicion repetitiva 
	while (cont<=*num){
		printf("ingrse el numero %d :",cont);//solicitud de datos 
		scanf("%d",&in);// lectura de datos
		if(in%2!=0){//comprobacion si un numero es impar 
		imp++;// incremenntador de numeros impares 	
		}
		cont++;//incrementador del ciclo repetitivo 
	}
	 	
	return imp;
}
