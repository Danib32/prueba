/* desarrollar un programa que permita determinar el IMC de una persona 
 imc= peso/altura^2
 
 <18.5 peso bajo 
 18.5 y 24.9 peso normal
 25 y 29.9 sobrepeso
 30 y 39.9 obesidad
 >40 obesidad morvida
 variables 
 flotantes altura, peso, imc
 */
 #include <stdio.h>
 #include<math.h>
 
 void main(){
 	float altura,peso,imc;
 	printf("Ingrese su altura en metros \n" );
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
}
 	
