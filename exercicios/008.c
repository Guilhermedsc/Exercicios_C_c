/*
Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra 
para calcular a conta é:

– Residencial: R$5,00 de taxa mais R$0,05 por m³ gastos;
– Comercial: R$500,00 para os primeiros 80 m³ gastos mais R$0,25 por m³ gastos;
– Industrial: R$800,00 para os primeiros 100 m³ gastos mais R$0,04 por m³ gastos;
O programa deverá ler a conta do cliente, consumo de água por metros cúbicos e o tipo de consumidor ( residencial, comercial e industrial ). Como resultado, imprima 
a conta do cliente e o valor real a ser pago pelo mesmo.
*/
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
int contacliente, consumoagua;
float formula;
char tipoconsumidor[15];

scanf("%d",&contacliente);
scanf("%d",&consumoagua);
scanf("%s",tipoconsumidor);

if (strcmp(tipoconsumidor,"RESIDENCIAL") == 0){
formula = 5.00 + (0.05 * consumoagua);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua <= 80 ){
formula = 500.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

else if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua > 80 ){
formula = 500.00 + ((consumoagua - 80) * 0.25);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua <= 100){
formula = 800.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f",formula);
}
else if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua > 100){
formula = 800.00 + ((consumoagua - 100 )* 0.04);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

return 0;	

}
