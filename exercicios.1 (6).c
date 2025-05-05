
#include <stdio.h>

int main() {
    float valorReais;
    float valorDolar; 
    float valorEuro;
    float taxaDolar = 5.66;  
    float taxaEuro = 6.40;   

    // Entrada
    printf("meu valor em reais (R$): ");
    scanf("%f", &valorReais);

    
    valorDolar = valorReais / taxaDolar;
    valorEuro = valorReais / taxaEuro;

    printf("Valor em dólares: US$ %.2f\n", valorDolar);
    printf("Valor em euros: € %.2f\n", valorEuro);

    return 0;
}