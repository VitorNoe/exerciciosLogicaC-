#include <iostream>

int main() {
    float a, b;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    if (a > b) {
        printf("O primeiro número é maior que o segundo.\n");
    } else if (a < b) {
        printf("O primeiro número é menor que o segundo.\n");
    } else {
        printf("Os dois números são iguais.\n");
    }

    return 0;
}
