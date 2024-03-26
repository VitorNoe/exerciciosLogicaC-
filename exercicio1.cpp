#include <iostream>

int main() {
    int num1, num2;
    
    // Solicita o primeiro número
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    // Solicita o segundo número
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    // Calcula a soma
    int soma = num1 + num2;
    
    // Imprime a soma
    printf("A soma dos números é: %d\n", soma);
    
    return 0;
}
