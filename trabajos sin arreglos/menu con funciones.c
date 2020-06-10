/******************************************************************************

Crear un programa que determine el factorial de un numero
5!=120
1*2*3*4*5

Pasos para usar funciones

1. Definir las librerias
2. Definicion de la funcion
3. LLamada a la funcion en funcion main()
4. Implementacion de la funion

GRUPO 1 

Crear una funcion que permite determinar la cantidad de numeros positivos, negativos y cero existe.
datos de entrada 
	enteros cantidad de numeros a ingresar(n), contador de repeticiones(cont),contador de positivos (numP),contador de negativos(numN),contador de ceros(cero);
	flotantes numeros a ingresar(numero)
proceso 
	mientras cont sea ,menor o igual a n hacer 
		escribir ingrese el numero # a evaluar 
		leer numero
		si numero mayor a 0 entonces 
			incrementar el contador numP
		si no  numero es igual a 0 entonces 
			incrementar el contador cero
		si no  numero menor a 0 entonces 
			incrementar el contador	numN
		fin si 
		
		incrementar el contador cont
		
	}
	escribir  cantidad de numeros positivos 
	escribir  cantidad de numeros negativos 
	escribir  cantidad de veces digitadas 0 
datos de salida 
	cantidad de numeros positivos,negativos y  veces digitadas 0 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int factorial(int);
void tablaMult(int,int);
void sumaN(int);
void Nnumeros(int);
int fibonacci(int);
// prototipo de la funcion 
void Nmuerospositivosnegativoscero(int);

//funcion principal
void main()
{
    int num,limite,op,lim,n,numero1;
    while(op!=7)
    {
    printf("1.Factorial\n2.Tabla de Multiplicar\n3.Suma de N numeros \n4.N numeros pares\n5.Fibonnaci\n6.Cantidad de numeros positivos negativos y ceros que existe\n7.salir\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);
    
        switch(op)
        {
            case 1:
                printf("Ingrese el numero:");
                scanf("%d",&num);
                while(num<0 )
                {
                    printf("Ingrese un numero positivo:");
                    scanf("%d",&num);
    
                }
                printf("El factorial de %d es %d\n",num,factorial(num));
                system("cls");
            break;
            case 2:
                printf("Ingrese la tabla a multiplicar:");
                scanf("%d",&num);
                printf("Ingrese el limite:");
                scanf("%d",&limite);
                tablaMult(num,limite);
                system("cls");
            break;
            case 3:
            	printf("ingrese la cantida de numeros a sumar \n");
            	scanf("%d",&lim);
                while(lim<0 )
                {
                    printf("error recuerde un numero positivo:");
                    scanf("%d",&lim);
                }
                sumaN(lim);
                system("cls");
            break;
            case 4:
            		printf("Ingrese la cantidad de numeros : ");
					scanf("%d",&n);
					while(n<0 )
                {
                    printf("error recuerde un numero positivo:");
                    scanf("%d",&n);
                }
                Nnumeros(n);
                system("cls");
            break;
            case 5:
		            printf("Ingrese la cantidad de numeros:");
		            scanf("%d",&numero1);
		            while(numero1<0)
		            {
		               printf("Ingrese la cantidad de numeros positivos:");
		               scanf("%d",&numero1); 
		            }
		            printf("La suma es %d\n",fibonacci(numero1));
		            system("cls");
            break;
            case 6:
            		printf("Ingrese la cantidad de numeros : ");//impresion de texto
					scanf("%d",&n);//lectura de datos 
					//validacion de datos 
					while(n<0)	
                {
                    printf("error recuerde un numero positivo:");
                    scanf("%d",&n);//lectura de datos 
                }
                //llamda a la funcion 
                Nmuerospositivosnegativoscero(n);
                
            	system("cls");
            break;
            case 7:
            	printf("Adios");
                exit(0);
            break;
            default: 
           	 	printf("opcion invalida \n");
           		system("pause \n");
           	 	system("cls");
            break;
            
        }
    }
    
    
}

int factorial(int numero)
{
    int fact=1,cont=1;
    while(cont<=numero)
    {
        fact=fact*cont;
        cont++;
    }
    return fact;
}

void tablaMult(int numero,int lim)
{
    int mult=1,cont;
    for(cont=1;cont<=lim;cont++)
    {
        mult=numero*cont;
        printf("%dX%d=%d\n",numero,cont,mult);
    }
    
}
void sumaN(int lim){
	int resul=0,cont=1;
	float numero;
	while (cont<=lim){
		printf("\n ingrese el numero %d  a sumar :",cont);
        scanf("%f",&numero);
        while(numero<0 )
                {
                    printf("****error recuerde un numero positivo****");
                    printf("\n ingrese el numero %d  a sumar :",cont);
                    scanf("%f",&numero);
                }
        resul=resul+numero;
        cont++;
	}
	printf("\n la suma de los %d numeros es: %d \n",cont-1,resul);
	system("pause");
}
void Nnumeros(int n){
	int cont=1,i=0,resul=0;
	while(cont<=n){
		i=i+2;
		printf("%d \n",i);
		resul+=i;
		cont++;
	}	
	printf("\n la suma de los %d numeros pares es: %d \n",cont-1,resul);
	system("pause");
}
int fibonacci(int cant)
{
    int num1=0,num2=1,num3=0,cont=1,suma=0;
    while(cont<=cant)
    {
        /*num1=num2+num3;
        num2=num3;
        num3=num1;
        printf("%d\t",num1);*/
        num1=num2;
        num2=num3;
        num3=num1+num2;
        printf("%d\t",num3);
        suma=suma+num3;
    cont++;    
    }
    printf("\n");
return suma;
}
//implementacion de funcion 
void Nmuerospositivosnegativoscero(int n){
	int cont=1,numP=0,numN=0,cero=0;// variables de la funcion 
	float numero;// variables de la funcion 
	//ciclo repetitivo y su condicion 
	while(cont<=n){
		printf("\n ingrese el numero %d  a evaluar :",cont);//impresion de texto
		scanf("%f",&numero);//lectura de datos
		//condicion de numeros positivos 
		if(numero>0){
			numP++;//incremnto de contador de positivos
		}
		//condicion de veces digitadas 0
		else if(numero==0){
			cero++;//incremnto de contador de veces digitadas 0
		}
			//condicion de numeros negativos
		else if (numero<0){
			numN++;//incremnto de contador de numeros negativos
		}
		
		cont++;//incremnto de contador del ciclo repetitivo 
	}
	printf("\n cantidad de numeros positivos : %d",numP);//salida de datos
	printf("\n cantidad de numeros negativos : %d",numN);//salida de datos
	printf("\n cantidad de veces digitadas 0 : %d \n",cero);//salida de datos
	system("pause");//pausa
}




