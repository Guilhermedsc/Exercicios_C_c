/*
Crie um programa que receba valores do usuário para preencher uma matriz, e em seguida, exiba a soma dos valores dela e a soma dos valores da primeira 
diagonal,ou seja, diagonal principal.
*/
#include<stdio.h>

int main()
{
    int li,co, soma=0,soma_diagonal;
    int matriz[3][3];

    printf("Digite os valores: ");    
    for(li=0; li<3; li++)
     {
        for(co=0; co<3; co++)
         {
           scanf("%d", &matriz[li][co]);
           soma=soma+matriz[li][co];
         }
     }
    printf("\n\n A soma dos valores: %d\n", soma);

    soma_diagonal=matriz[0][0]+matriz[1][1]+matriz[2][2];
    printf("A soma da diagonal principal= %d\n\n",soma_diagonal);
 return 0; 
}
