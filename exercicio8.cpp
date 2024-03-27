#include <iostream>

int main() {
    int lado1, lado2, lado3;
    
    printf("Digite o primeiro lado do triângulo: "); // Solicita os três lados do triângulo ao usuário
    scanf("%d", &lado1);
    
    printf("Digite o segundo lado do triângulo: ");
    scanf("%d", &lado2);
    
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d", &lado3);
    
    int resultado = (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) ? 1 : 0; // Verifica se os lados podem formar um triângulo
    
    printf("Os lados podem formar um triângulo? %d\n", resultado); // Imprime o resultado
    
    return 0;
}
 // Tera a resposta 1 se puderem formar um triângulo e 0 se não puderem.