#include <iostream>

int main() {
    int horas;
    int segundos;
    
    printf("Digite o número de horas: ");
    scanf("%d", &horas);
    
    //(1 hora = 3600 segundos)
    segundos = horas * 3600;
    printf("O número de horas convertido para segundos é: %d segundos\n", segundos);
    
    return 0;
}
