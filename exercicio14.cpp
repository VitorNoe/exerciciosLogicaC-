#include <iostream>

int main() {
    int numero, originalNumero, resto, numeroReverso = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    originalNumero = numero;
    
    while (numero != 0) {
        resto = numero % 10;
        numeroReverso = numeroReverso * 10 + resto;
        numero /= 10;
    }
    
    int palindromo = (originalNumero == numeroReverso) ? 1 : 0;
    
    printf("O número %d é palíndromo? %d\n", originalNumero, palindromo);
    
    return 0;
}
// Um palíndromo é um número inteiro positivo, sem zeros à esquerda, que é o mesmo se lido da esquerda para a direita ou da direita para a esquerda.