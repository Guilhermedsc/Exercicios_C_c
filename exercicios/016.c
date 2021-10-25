/*
Crie um programa que preencha todos os valores de uma matriz 2x2, e em seguida exiba todos os valores e a soma de todos os valores.
*/
#include<stdio.h>
#include<locale.h> /* Arquivo de cabeçalho que nos permite utilizar a função setlocale que faz a função printf() imprimir na tela caracteres da língua Portuguesa como por exemplo ç , á, ã */
int main()
{
float matriz[2][2], soma=0;
int i,j;
setlocale(LC_ALL,"PORTUGUESE");
printf("\t \n Digite os valores da matriz : \n");
for(i=0;i<2;i++) /*como a gente precisa exibir uma matriz de duas linhas e duas colunas e a contagem começa em zero, temos que colocar i<2 pra termos as duas linhas, ou seja, i[0] e i[1] e o mesmo acontece com as colunas j[0] e j[1] pra totalizar 4 elementos (2*2=4)*/
for(j=0;j<2;j++)
{
 scanf("%f",&matriz[i][j]);
}

for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
  soma=soma+matriz[i][j];
}
printf(" Os valores são: \n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
  {
     printf("%.1f\n",matriz[i][j]);
  }
 printf("A soma é = %.1f\n",soma);
 return 0; 
}
