/*
Fazer um algoritmo que:
Leia números de matrículas de alunos e armazene-os em um vetor até o vetor ser preenchido por 10 matrículas. Esses números são distintos, ou seja, o 
vetor não armazenará valores repetidos.
*/
#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

int vetor[10], numero, cont, posicao = 0 ;

while (posicao < 10){

scanf("%d",&numero);

if (posicao == 0){
vetor[posicao] = numero;
printf("%d\n",vetor[posicao]);
posicao++;
}

else{

for(cont = 0; (cont < posicao)&&(vetor[cont]!= numero); cont++);

if (cont >= posicao){
vetor[posicao] = numero;
printf("%d\n",vetor[posicao]);
posicao++;
}
}
}
return 0;
}
