#include <iostream>

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;
    
    // Solicita a temperatura em Celsius ao usuário
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> temperaturaCelsius;
    
    // Converte a temperatura para Fahrenheit usando a fórmula F = (C * 9/5) + 32
    temperaturaFahrenheit = (temperaturaCelsius * 9.0 / 5.0) + 32.0;
    
    // Imprime a temperatura equivalente em Fahrenheit
    std::cout << "A temperatura equivalente em Fahrenheit é: " << temperaturaFahrenheit << "°F" << std::endl;
    
    return 0;
}
