
#include<stdio.h>
#include<stdlib.h>

void main(){
	int op;
	int clientes,Canproductos,i,j,canporproducto; 
	float total=0,subtotal=0,iva,valproducto,valitem;
	char nombre[20],Nproducto[70];
    while (op !=2){
    	
    	printf("\n \t \t BIENVENIDO \n");
	printf("\t Menu de opciones : \n");
	printf("1. Factura\n2.salir ");
	printf("Escoja una de las opciones :  ");
	scanf("%d",&op);
	switch(op){
		case 1:
				printf("Ingrese la cantidad del clientes: ");
				scanf("%d",&clientes);
				printf("*********************************************************************** \n");
				for(i=0;i<clientes;i++){
					printf("\t\t\t\t CLIENTE %d \n",i+1);
					printf("ingrse el nombre del cliente %d :",i+1);
					scanf("%s",&nombre);
					printf("ingrse cantidad de productos");
					scanf("%d",&Canproductos);
					for(j=0;j<Canproductos;j++){
					printf("*********************************************************************** \n");
						printf("ingrese nombre de producto %d :",j+1);
						scanf("%s",&Nproducto);
						printf("ingrese cantidad del producto %d :",j+1);
						scanf("%d",&canporproducto);
						printf("ingrese valor del producto %d :",j+1);
						scanf("%f",&valproducto);
						valitem=valproducto*canporproducto;
						subtotal=subtotal+valitem;
					printf("***********************************************************************\n");	
					}
					printf("***********************************************************************\n");
					iva=subtotal*0.12;	
					printf("subtotal a pagar cliente %d : %.2f \n",i+1,subtotal);
					printf("IVA : %.2f \n",iva);
					total=subtotal+iva;	
					printf("Total a pagar cliente %d : %.2f \n",i+1,total);
					printf("***********************************************************************\n");
					total=0;
					iva=0;
					subtotal=0;
				}
				system("pause");
				system("cls");  
  		break;
        case 2:
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
