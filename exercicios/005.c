/*
Faça um Programa que converta metros para centímetros.
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    float metros, centimetros;
    std::cout << "Digite o valor em metros para converter em centimetros\n";
    std::cin >> metros;
    
    std::cout << "A em centimetros e: " << metros*100 << "cm";

    return 0;
}
