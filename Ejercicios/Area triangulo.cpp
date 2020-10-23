#include <stdio.h>
#include <math.h>

int main()
{
 float base,altura,area;
    

 printf("Introduce la base de un triangulo:\n");
 scanf("%f",&base);
 
 printf("Introduce la altura de un triangulo\n:");
 scanf("%f",&altura);
 	

  printf("El area del tringulo es:");
  
  area=base*altura/2;
  
  printf("%f\n",area);
  
  return 0;
}

