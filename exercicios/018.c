/*
Faça um programa em Linguagem C que leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
*/
#include<stdio.h>
#include<locale.h> /* Arquivo de cabeçalho que nos permite utilizar a função setlocale que faz a função printf() imprimir na tela caracteres da língua Portuguesa como por exemplo ç , á, ã */
int main()
{
    int linha, coluna, matriz[6][6], contador=0;
    setlocale(LC_ALL,"PORTUGUESE");
    for( linha=0; linha<6; linha++ )
    {
        for( coluna=0; coluna<6; coluna++ )
        {
           printf("Digite o valor de [%d][%d] = ", linha+1, coluna+1);
           scanf("%d", &matriz[linha][coluna]);
           if( matriz[linha][coluna] > 10 )
               contador++;
        }
    }
    printf("\n\n números maiores que Dez = %d \n\n", contador);
  return 0;    
}
