/*
Um certo aço é classificado de acordo com o resultado de três testes abaixo, que devem determinar se o mesmo satisfaz as especificações:
1. Conteúdo de Carbono abaixo de 7;
2. Dureza Rockwell maior do que 50;
3. Resistência á tração maior do que 80.000 psi;
*/
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
int conteudo, dureza, resistencia;

scanf("%d",&conteudo);
scanf("%d",&dureza);
scanf("%d",&resistencia);    

if (conteudo < 7 && dureza > 50 && resistencia > 80000){
printf("ACO DE GRAU = 10\n");
}

else if (conteudo < 7 && dureza > 50 && resistencia <= 80000) {
printf("ACO DE GRAU = 9\n");
}

else if (conteudo < 7 && dureza <= 50 && resistencia <= 80000){
printf("ACO DE GRAU = 8\n");
}

else if (conteudo >= 7 && dureza <= 50 && resistencia <= 80000){
printf("ACO DE GRAU = 7\n");
}	

return 0;
}
