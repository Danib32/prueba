/******************************************************************************
Crear un programa que permita realizar el cuadrado y la raiz de un numero.

Crear un programa que permita ingresar por teclado dos numero y realiza la suma 
y resta de dichos numeros.

4 y 5
Funcion Valor  4 5
Funcion Referencia 9 y -1

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void funcionValor(float,float);
void funcionRef(float *,float *);//Definicion del prototipo
void funcionSuma(float, float);
void funcionreferencia(float*, float*);
void serieparRef(float *);
int primo(int *);

void main()
{
    int n;
    float num1,num2;
    /*printf("Ingrese el numero 1 y numero 2:");
    scanf("%f %f",&num1,&num2);
    //printf("Paso por Valor\n");
    //funcionValor(num1,num2);//Llamada a la funcion paso por Valor
    //printf("Numero1=%f y Numero2=%f\n",num1,num2);
    //printf("Paso por Referencia\n");
    //funcionRef(&num1,&num2);//Llamada a funcion paso por Referencia
    //printf("Numero1=%f y Numero2=%f\n",num1,num2);


    printf("\nPaso por Referencia\n");
    funcionreferencia(&num1,&num2);//Llamada a funcion paso por Referencia
    printf("Numero1=%f y Numero2=%f\n",num1,num2);
    
    printf("Paso por Valor\n");
    funcionSuma(num1,num2);//Llamada a la funcion paso por Valor
    printf("Numero1=%f y Numero2=%f\n",num1,num2);
    
    
    printf("Paso por referencia\n ");
    serieparRef(&num1);//llamadad a la funcion paso por referencia*/
    printf("Ingrese la cantidad de numeros:");
    scanf("%d",&n);
        while(n<0)
        {
         printf("Ingrese la cantidad de numeros positivos:");
         scanf("%d",&n);
        }
        
    printf("Existe %d numeros primos\n",primo(&n));
    
}

void funcionValor(float x,float y)
{
    x=x*x;
    y=sqrt(y);
    
}

void funcionRef(float *x,float *y)
{
    
    *x=(*x)*(*x);
    *y=sqrt(*y);
}
void funcionSuma(float x,float y)
{
   
    x=x+y;
    x=x-y;
    printf("%f %f", x, x);
    
    
}
void funcionreferencia(float *x,float *y)
{
    float aux=*x;
    
    *x=*x-*y;
    *y=aux+*y;
}
void serieparRef(float *x)
{
    float cont=1,resul=0;
    while(cont<=*x)
    {
        resul=resul+2;
        printf("%2.f\n",resul);
        cont++;
    }
    
}

int primo(int *n)
{
    int cont=1, num, i, x=0, sumador=0;
        
        while(cont<=*n)
        {
        printf("Ingrese el numero: ");
        scanf("%d",&num);
            while(num<0)
            {
                printf("Ingrese un numero positivo: ");
                scanf("%d",&num);
            }
            
            if(num>0)
            {
                sumador=0;
                for (i=1; i<=num; i++)
                {
                    if(num%i==0) 
                   {
                       sumador=sumador+1;
                   }
                   
                }
                if(sumador==2)
                {
                    x=x+1;
                }
                
            }
            
        cont=cont+1;
        }
       return x;
}

