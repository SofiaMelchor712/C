#include<stdio.h>
#include<math.h>

int main()
{
	
float l, perimetro;

printf("introduce el lado de un triangulo equilatero:");
scanf("%f",&l);

perimetro=l+l+l;
printf("El perimetro del triangulo equilatero es:%0.2f",perimetro);

return 0;
}
