/* realizar un programa que sume dos numeros por funciones
4!= 1*2*3*4
 */

#include <stdio.h>
//definicicion de prototipo de funciones 

float sumaN(float,float);
int factorial(int);
void tablamul(int);

// funcion principal
void main(){
	float num1,num2;
	int fac,ntabla;
	printf("ingrese los dos numero \n");
	scanf("%f",&num1);
	scanf("%f",&num2);
	printf("la suma es %.2f",sumaN(num1,num2));
	printf("\ningrese el numero que desea obener el factorial : ");
	scanf("%d",&fac);
	printf("\n El factorial de %d es :%d ",fac,factorial(fac));
	printf("\ningrese el numero que desea hacer una tabla de multiplicar: ");
	scanf("%d",&ntabla);
	tablamul(ntabla);
	
}
// implementacion de funciones 
float sumaN(float num1,float num2){
	float suma=0;
	suma=num1+num2;
	return suma;
}
int factorial(int fac){
	int resul=1,cont=1;
	while(cont<=fac){
		resul=resul*cont;
		cont++;
	}
	return resul;
}

void tablamul(int ntabla){
	int resul=0,cont=1;
	while(cont<=10){
		resul=ntabla*cont;
		printf(" %d x % d= %d \n", ntabla,cont,resul);
		cont++;
	}
}
