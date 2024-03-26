#include <iostream>

int main() {
    int numero;
    
    printf("Digite um número inteiro: "); // Solicita um número inteiro ao usuário
    scanf("%d", &numero);
    
    int resultado = (numero < 0) ? 1 : 0; // Verifica se o número é negativo
    
    printf("O número %d é negativo? %d\n", numero, resultado);  // Imprime o resultado
    
    return 0;
}
 // O sinal 1 se for negativo e 0 se for positivo ou zero.
