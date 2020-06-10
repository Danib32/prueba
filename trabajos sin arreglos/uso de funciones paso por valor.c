/*
crear un programa que realice el cuadrado de  un numero y la raiz  
crear un programa que prmita realizar las operaciones matematicas (+, -) de dos numeros usano ppaso por valor y paso por referecia
*/

#include<stdio.h>
#include<math.h>

void  vmatematicas (float , float );
void  rmatematicas (float *, float *);
void  nnuerosp (int *);
void  impares (int *);
void main(){
	
	float a,b;
	int n,num;
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
	printf("ingrese limite de n numeros : ");
	scanf("%d",&n);
	nnuerosp(&n);
	printf("ingrese catidad de numeros : ");
	scanf("%d",&num);
	while (num<=0){
        printf("ERROR!: Ingrese un entero positivo\n Ingrese cantidad de numeros: ");
        scanf("%d",&num);
      }
	impares(&n);
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
		printf("%d",suma);
		cont++;
	}	
}
void  impares (int *num){
	int cont=1,imp=0,in;
	while (cont<=*num){
		printf("ingrse el numero %d :",cont);
		scanf("%d",&in);
		if(in%2!=0){
		imp++;	
		}
		cont++;
	}
	printf("hay %d numeros impares \n",imp);	
}
