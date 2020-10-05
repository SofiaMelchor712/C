#include<stdio.h>//Input Output
#include<math.h>
#define PI 3.1416 //Defiendo una constante

int main(){
	float area, radio;//Definiendo variables de tipo flotante
	radio = 5;//Asignado valor a variable radio
	area = PI * pow(5,2);//Asignando resultado de la operacion a variable area
	printf("Area\n");//imprimiendo titulo
	//imprimiendo rsultado
	printf("Area delCirculo con radio 5:%f",area);
return 0;
}
