/*
Desenvolver um algoritmo com as opções de calcular e imprimir o volume e a área da superfície de um cone reto, um cilindro ou uma esfera. O algoritmo deverá ler a 
opção da figura desejada (cone / cilindro / esfera) e de acordo com a opção escolhida calcular o volume e a área da superfície da figura pedida. Fórmulas:
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#define pi 3.1415

int main()
{

   float raio, altura, volume, area;
   char tipo[10];

   scanf("%f",&raio);
   scanf("%f",&altura);
   scanf("%s",tipo);

   if (strcmp(tipo,"CONE")==0){
       volume = ((pi * pow(raio,2)) * altura) / 3;
       area = (pi * raio) * sqrt(pow(raio,2) + pow(altura,2));
       printf("VOLUME = %.2f\n",volume);
       printf("AREA = %.2f\n",area);
   }

else if (strcmp(tipo,"CILINDRO")==0){
       volume = ((pi * pow(raio,2)) * altura);
       area = (2 * pi) * (raio * altura);
       printf("VOLUME = %.2f\n",volume);
       printf("AREA = %.2f\n",area);
   }

   else if (strcmp(tipo,"ESFERA")==0){
       volume = (pi * 4 * pow(raio,3)) / 3;
       area = (4 * (pi * pow(raio,2)));
       printf("VOLUME = %.2f\n",volume);
       printf("AREA = %.2f\n",area);
   }

return 0;
}
