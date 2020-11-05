#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int opcion;
	float a,b,r;

	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raiz Cuadrada:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);

	if(opcion==6){
	printf("Introduce solo un numero:\n");
	scanf("%f",&a);}
	else if (opcion>=7){
	}
	else{
	printf("Introduce el primer numero:\n");
     scanf("%f",&a);
 
	 printf("Introduce el segundo numero:\n");
 	scanf("%f",&b);
	}
	
	switch(opcion)
	{
	case 1: 
		r= a +b ;
		printf("%0.2f",r);
		break;
	case 2: 
		r= a-b ;
		printf("%0.2f",r);
		break;
	case 3: 
		r= a *b ;
		printf("%0.2f",r);
		break;
	case 4: 
	
		if(b==0){
		printf("La operacion no esta definida");}
	 	else{(r= a /b );
		printf("%0.2f",r);}
			break;
	case 5: 
		r= pow(a,b);
		printf("%0.2f",r);
		break;

	case 6:
	if(a<0)  {
	    	printf("la operacion no esta definida"); } 
	else  {	
		r=sqrt(a); 
		printf("%0.2f",r);}
		break;
		
	default:
		printf("salir");
		exit(0);
	}
		
	}
