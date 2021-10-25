/*
Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra 
para calcular a conta é:

– Residencial: R$5,00 de taxa mais R$0,05 por m³ gastos;
– Comercial: R$500,00 para os primeiros 80 m³ gastos mais R$0,25 por m³ gastos;
– Industrial: R$800,00 para os primeiros 100 m³ gastos mais R$0,04 por m³ gastos;
O programa deverá ler a conta do cliente, consumo de água por metros cúbicos e o tipo de consumidor ( residencial, comercial e industrial ). Como resultado, imprima 
a conta do cliente e o valor real a ser pago pelo mesmo.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float salarioHr, salarioMe, horasTrabalhadas;
    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &salarioHr);
    printf("Digite quantas horas voce trabalhou esse mes: ");
    getchar();
    scanf("%f", &horasTrabalhadas);
    salarioMe = salarioHr * horasTrabalhadas;
    printf("Seu salario total do mes eh de R$%.2f", salarioMe);
    return 0;
}
