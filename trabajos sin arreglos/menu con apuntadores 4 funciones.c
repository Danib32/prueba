
#include<stdio.h>
#include<stdlib.h>
void  vmatematicas (float , float );
void  rmatematicas (float *, float *);
void  nnuerosp (int *);
void  impares (int *);
void main(){
	int op;
	float a,b;
	int n,num;
    while (op !=4){
    	
    	printf("\n \t \t BIENVENIDO \n");
	printf("\t Menu de opciones : \n");
	printf("1. Factura\n2.salir ");
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
        case 3:
        		printf("ingrese catidad de numeros : ");
				scanf("%d",&num);
				while (num<=0){
				        printf("ERROR!: Ingrese un entero positivo\n Ingrese cantidad de numeros: ");
				        scanf("%d",&num);
				      }
				impares(&n);
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
