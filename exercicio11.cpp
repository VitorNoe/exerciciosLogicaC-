#include <iostream>
int main() {
    float base, altura;
    float area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2.0;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;

}