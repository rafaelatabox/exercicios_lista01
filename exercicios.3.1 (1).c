#include <stdio.h>

int main() {
    int valor;

    printf(" nesse valor inteiro: ");
    scanf("%d", &valor);

    printf("nesse valor inicial: %d\n", valor);

    // Incremento
    valor++;
    printf("Após esse incremento (valor++): %d\n", valor);

    // Decremento
    valor--;
    printf("Após esse decremento (valor--): %d\n", valor);

    // Incremento de prefixo
    printf("Após esse incremento de prefixo (++valor): %d\n", ++valor);

    // Decremento de prefixo
    printf("Após esse decremento de prefixo (--valor): %d\n", --valor);

    return 0;
}