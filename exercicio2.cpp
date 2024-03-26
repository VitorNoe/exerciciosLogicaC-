#include <iostream>

int main() {
    int num;
    
    // Ira pedir um numero ao usuario            
    std::cout << "Digite um número inteiro: ";  // cout: É usado para a saída de dados para o console. Por exemplo, para exibir mensagens, resultados de cálculos, etc.
    std::cin >> num;                            // cin: É usado para a entrada de dados do usuário. Por exemplo, para ler valores que o usuário insere no console.
    
    // Verifica se o número é par ou ímpar
    int resultado = (num % 2 == 0) ? 1 : 0;
    
    // Realiza o resultado
    std::printf("O número %d é par? %d\n", num, resultado);
    
    return 0;
}