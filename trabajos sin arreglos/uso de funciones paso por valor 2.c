/*
crear un programa que realice el cuadrado de  un numero y la raiz  
crear un programa que prmita realizar las operaciones matematicas (+, -) de dos numeros usano ppaso por valor y paso por referecia
*/

#include<stdio.h>
#include<math.h>
void  funcionvalor (float , float );
void  funcionreferencia (float *, float *);
void  funcionvalormatematicas (float , float );
void  funcionreferenciamatematicas (float *, float *);
void  nnuerosp (int *);
void main(){
	
	float a,b;
	int n;
	printf("ingrese numero 1 y numero 2\n");
	scanf("%f %f",&a,&b);
	funcionvalor(a,b);
	printf("paso por valor\n");
	printf("el cudrado es= %.1f y la raiz es=%.1f \n",a,b);
	printf("paso por referencia \n");
	funcionreferencia (&a,&b);
	printf("el cudrado es= %.1f y la raiz es=%.1f \n",a,b);
	printf("*********************************************************************************************\n");
	scanf(" los numeros ingresados son el primero es %f y el segundo es  %f",a,b);
	funcionvalormatematicas (a,b);
	printf("paso por valor\n");
	printf(" la multiplicacion  es= %.1f y la resta es=%.1f \n",a,b);
	printf("paso por referencia \n");
	funcionreferenciamatematicas (&a,&b);
	printf("el cudrado es= %.1f y la raiz es=%.1f \n",a,b);
	printf("ingrese limite de n numeros : ");
	scanf("%d",&n);
	nnuerosp(&n);
}
void  funcionvalor (float a, float b){
	a=a+b;
	b=a-b;
}
void  funcionreferencia(float *a, float *b){
	*a=(*a)+(*b);
	*b=(*a)-(*b);
}
void nnuerosp(int *n){
	int cont=0;
	printf("la sucecion es");
	while (cont<=n){
		printf("%d",*n+2);
		cont ++;
	}
	
}
