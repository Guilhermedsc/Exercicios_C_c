/*
Fazer um algoritmo que:
Receba duas matrizes 3×3, mescle as linhas e colunas formando uma terceira matriz 3×3 com os maiores números das duas primeiras matrizes e calcule a determinante da nova matriz.
*/
#include<math.h>
#include<stdio.h>
#include<string.h>

int main(void){

    int matriz1[3][3], matriz2[3][3],matrizResultado[3][3], linha, coluna, determinante =0, principal =0, secundaria =0;

      // Zerando matriz
    for(linha =0; linha < 3; linha++){
        for(coluna =0; coluna < 3; coluna++){
            matrizResultado[linha][coluna] = 0;
        }
    }

    // Lendo a primeira Matriz 1
    for(linha =0; linha < 3; linha++){
        for(coluna =0; coluna < 3; coluna++){
            scanf("%d",&matriz1[linha][coluna]);
        }
    }

    // Lendo a segunda Matriz 2
      for(linha =0; linha < 3; linha++){
        for(coluna =0; coluna < 3; coluna++){
            scanf("%d",&matriz2[linha][coluna]);
        }
    }

    // Verificando maior numero
      for(linha =0; linha < 3; linha++){
        for(coluna =0; coluna < 3; coluna++){

            if (matriz1[linha][coluna] > matriz2[linha][coluna]){
                matrizResultado[linha][coluna] = matriz1[linha][coluna];
            }

                else{
                matrizResultado[linha][coluna] = matriz2[linha][coluna];
            }
        }
    }

for(linha= 0;linha<3;linha++){
    for(coluna= 0 ;coluna < 3;coluna++){
    principal =(+((matrizResultado[0][0]* matrizResultado[1][1]* matrizResultado[2][2])+(matrizResultado[0][1]* matrizResultado[1][2] * matrizResultado[2][0])+(matrizResultado[0][2] *matrizResultado[1][0]* matrizResultado[2][1])));
    secundaria =(-((matrizResultado[0][2]* matrizResultado[1][1]*matrizResultado[2][0])+(matrizResultado[0][0]* matrizResultado[1][2]* matrizResultado[2][1])+(matrizResultado[0][1]*matrizResultado[1][0]*matrizResultado[2][2])));
    determinante = principal + secundaria;
    }
}

    printf("DETERMINANTE = %d\n",determinante);
    return 0;
}
