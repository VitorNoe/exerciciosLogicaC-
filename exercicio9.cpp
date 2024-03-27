#include <iostream>
int main() {
    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);
    
    int resultado = (numero > 0 && numero % 2 == 0) ? 1 : 0;
    
    printf("O número %d é positivo e par? %d\n", numero, resultado);
    
    return 0;
}
  // Sera imprimido 1 se for par e 0 se não for um par.