/*desarollar un programa que nos permita sumar n numeros positivos*/
#include <stdio.h>
void main(){
	int n,cont=1;
	float suma=0,numero;
	
	printf("ingrese la cantidad de numeros a sumar");
	scanf("%d",&n);
	
	while(cont<=n){
		
		printf("ingrese el numero a sumar");
		scanf("%f",&numero);
		while(numero<0){
			printf("ingrese numeros solo positivos a sumar");
			scanf("%f",&numero);
		}
		suma=suma+numero;
		cont++;
	}
	printf("la suma es : %.2f",suma);
}
