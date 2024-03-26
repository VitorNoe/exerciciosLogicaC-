#include <iostream>

int main() {
    int numero;
    
    // Solicita um número inteiro ao usuário
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;
    
    // Verifica se o número é positivo
    int resultado = (numero > 0) ? 1 : 0;
    
    // Imprime o resultado
    std::cout << "O número " << numero << " é positivo? " << resultado << std::endl;
    
    return 0;
}
// Imprima 1 se for positivo e 0 se for negativo.