/*  crear un programa que nos permita crear un programa que me permita generar los n numeros pares*/
#include<stdio.h>
void main(){
	int cont=1,i=0,n;
	printf("Ingrese la cantidad de numeros : ");
	scanf("%d",&n);
	while(cont<=n){
		i=i+2;
		printf("%d \n",i);
		cont++;
	}
	
}
