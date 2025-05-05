#include <stdio.h>

int main() {
    int numero;
    int divisivel_2 = 0;
    int divisivel_3 = 0;
    int divisivel_5 = 0;

    printf("um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        divisivel_2 = 1;
    }

    if (numero % 3 == 0) {
        divisivel_3 = 1;
    }

    if (numero % 5 == 0) {
        divisivel_5 = 1;
    }

    printf("Divisor:\n");
    if (divisivel_2 == 1) {
        printf("2 ");
    }
    if (divisivel_3 == 1) {
        printf("3 ");
    }
    if (divisivel_5 == 1) {
        printf("5 ");
    }
    printf("\n");

    return 0;
}