#include <iostream>

int main() {
    float num1, num2, num3;
    
    // Pede três números ao usuário
    std::cout << "Digite três números reais:\n";
    
    // Lê os três números
    std::cin >> num1 >> num2 >> num3;
    
    // Calcula a média
    float media = (num1 + num2 + num3) / 3.0;
    
    // Imprime a média
    std::cout << "A média dos três números é: " << media << std::endl;
    
    return 0;
}