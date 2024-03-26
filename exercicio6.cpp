#include <iostream>

int main() {
    int ano;
    
    printf("Digite o ano: "); // Irá ser solicitado o ano para o usuário.
    scanf("%d", &ano);
    int resultado = ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) ? 1 : 0; // Verifica se o ano é bissexto.
    printf("O ano %d é bissexto? %d\n", ano, resultado); // Imprime o resultado.
    
    return 0;
}
//Imprima 1 se for bissexto e 0 se não for.
