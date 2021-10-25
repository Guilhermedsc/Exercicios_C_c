/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    float nota1, nota2, nota3, nota4, media;
    std::cout << "Digite as 4 notas\n";
    std::cin >> nota1 >> nota2 >> nota3 >> nota4;
    
    std::cout << "A media das notas e: " << (nota1 + nota2 + nota3 + nota4)/4;

    return 0;
}
