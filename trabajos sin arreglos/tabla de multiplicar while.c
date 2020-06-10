#include<stdio.h>
void main(){
	int numero,limite,contador=1, resultado;
	printf("ingrese el numero que desea multiplicar :");
	scanf("%d",&numero);
	printf("ingrese el limite hasta donde debe llegar :");
	scanf("%d",&limite);
	while(contador<=limite){
		resultado=numero*contador;
		printf("%d x %d = %d \n",numero,contador,resultado);
		contador++;
	}
	
}
