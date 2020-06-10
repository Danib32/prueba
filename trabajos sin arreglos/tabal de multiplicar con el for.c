/*realizar la tabal de multiplicar de cualquier numero y que imprima en pantalla */
#include <stdio.h>
void main(){
	int numero,limite,i, resultado;
	printf("ingrese el numero que desea multiplicar :");
	scanf("%d",&numero);
	printf("ingrese el limite hasta donde debe llegar :");
	scanf("%d",&limite);
	for (i=1;i<=limite;i++){
		resultado=numero*i;
		printf("%d x %d = %d \n",numero,i,resultado);
		
	}
}
