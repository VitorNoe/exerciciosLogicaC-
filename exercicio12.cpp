#include <iostream>

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int divisivel_por_3_e_5 = (numero % 3 == 0 && numero % 5 == 0) ? 1 : 0;
    
    printf("O número %d é divisível por 3 e por 5? %d\n", numero, divisivel_por_3_e_5);
    
    return 0;
}
