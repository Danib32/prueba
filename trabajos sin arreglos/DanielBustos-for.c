/*
crear un nombre que nos permita escoger un menu de opciones
1. mayor de edad
2.imc
3. Sueldo trabajador
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main(){
	int op;
	float altura,peso,imc;
	float gradosC,gradosF,centigrados=0,farenheit=0;
	char nombre[50];
    int edad;
    int numero,i,j;// declaracion de variables ejercio 4
    while (op !=4){
    	
    	printf("\n \t \t BIENVENIDO \n");
	printf("\t Menu de opciones : \n");
	printf(" 1.Mayor de edad \n 2.IMC \n 3.Conversor de temperatura\n 4.Sucesion de numeros\n 5.Salir \n");
	printf("Escoja una de las opciones :  ");
	scanf("%d",&op);
	switch(op){
		case 1:printf("ingrese su nombre \n");
  	  			scanf("%s",nombre );
   		 		printf("ingrese su edad \n");
    			scanf("%i",&edad );
   				if(edad>=18){
   					printf("%s es mayor de edad \n",nombre);
				   } 
				else{
					printf("%s es menor de edad \n",nombre);
				} 
				system("pause");
				system("cls");  
  		break;
  		case 2:printf("Ingrese su altura en metros \n" );
 				scanf("%f",&altura);
 				printf("Ingrese su peso en kilos \n" );
 				scanf("%f",&peso);
 				imc=peso/(pow(altura,2));
 				printf("el imc es %.2f \n",imc );
 				if(imc<18.5){
 				printf("Posee un peso bajo \n" );
 				}
				 else if(imc>=18.5 && imc<=24.9){
			 	printf("Posee un peso normal \n" );
	 			}		
				  else if(imc>=25 && imc<=29.9){
	 			printf("Posee un sobrepeso  \n" );
	 			}
				else if (imc>=30 && imc<=39.9 ){
	 			printf("tiene obesidad  \n" ); 		
				 }
				else {
				printf("tiene obesidad morvida  \n" );
				}
				system("pause");
				system("cls");  
		break;
		case 3:
				printf("1. C a F\n2.F a C\n");
                printf("EScoja la opcion:");
                scanf("%d",&op);
                if(op==1)
                {
                        printf("Ingrese los grados centigrados:");
                        scanf("%f",&gradosC);
                        farenheit=(gradosC*9)/5+32;
                        printf("La conversion es: %.2f grados farenheit \n",farenheit);
                }
                else if(op==2)
                {
                        printf("Ingrese los grados farenheit:");
                        scanf("%f",&gradosF);
                        centigrados=(gradosF-32)*5/9;
                        printf("La conversion es: %.2f grados centigrados",centigrados);
                }
                system("pause");
				system("cls");  
                break;
        case 4:
					        			/*
					Daniel Bustos 
					Dado un numero entero ingresado por teclado, mostrar el siguiente diagrama: Ejemplo N = 4(SENTENCIA FOR)
					
					11
					1122
					112233
					1122
					11
					
					datos de entrada 
					
					entero numero limite
					vribles de control del for i y j 
					proceso 
					
					mediante el uso del for 
					determinar el numero limite para el for 
					con un for anninado imprimir los numeros en sucesion 
					y fuera del for aninado utilizar el salto para que haga cambio de linea 
					
					datos de salida 
					sucecion escalada
					*/

					printf("ingrese el numero limite : ");
					scanf("%d",&numero);
					//uso del for 
					for(i=1;i<=numero;i++){
						//for anidado 
						for(j=1;j<=i;j++) {
							//impresion del numero 
							printf("%d",j);
							printf("%d",j);
							
						}
						// salto de linea 
						printf("\n");	
					}	
					for(i=numero-1;i>0;i--){
						//for anidado 
						for(j=1;j<=i;j++) {
							//impresion del numero 
							printf("%d",j);
							printf("%d",j);
						}
						printf("\n");	
						// salto de linea 
						
					} 	
				system("pause");
				system("cls");  
				        	
        break;
        case 5:
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
