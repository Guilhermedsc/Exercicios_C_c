/*
Fazer um algoritmo que:
Preencha um vetor com X números inteiros, em que o último número lido seja 999 (o último  número não fará parte do vetor). E  imprima o vetor na ordem inversa.
*/
#include<math.h>
#include<stdio.h>
#include<string.h>

int main(void){

	int contador = 0, numero, vetor[contador];

	scanf("%d",&numero);

	while (numero != 999){

		if (contador == 0){
		vetor[contador] = numero;
		contador++;
		}	

			else{
			vetor[contador] = numero;
			contador++;
			}

	scanf("%d",&numero);		
	}

	if (numero == 999){
		contador--;
		}

	while ( contador >= 0 ){

		printf("%d\n",vetor[contador]);
		contador--;
	}
	return 0;
}
