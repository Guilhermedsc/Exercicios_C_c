/*
Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de “y” de acordo com as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;
*/
#include<stdio.h>
#include<math.h>

int main()
{
int x, y;

scanf("%d",&x);

if(x < 1)
{
y = x;
printf("Y = %d\n",y);
}	

else if(x == 1)
{
y = 0;
printf("Y = %d\n",y);
}

else if(x > 1)
{
y = pow(x,2);
printf("Y = %d\n",y);
}

return 0;
}
