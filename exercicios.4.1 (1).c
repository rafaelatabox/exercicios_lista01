
#include <stdio.h>

int main() {
    float nota;
    char conceito;

    
    printf("Digite a nota (0.0 a 10.0): ");
    scanf("%f", &nota);

    
    if (nota >= 9.0 && nota <= 10.0) {
        conceito = 'A';
    } else if (nota >= 8.0 && nota < 9.0) {
        conceito = 'B';
    } else if (nota >= 6.0 && nota < 8.0) {
        conceito = 'C';
    } else if (nota >= 4.0 && nota < 6.0) {
        conceito = 'D';
    } else if (nota >= 0.0 && nota < 4.0) {
        conceito = 'F';
    } else {
        printf("Nota inválida! fale um valor entre 0.0 e 10.0.\n");
        return 1;
    }

    printf("Conceito: %c\n", conceito);

    return 0;
}