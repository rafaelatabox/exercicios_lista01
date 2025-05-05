#include <stdio.h>

int main() {
    int numero;

    printf("esse numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }

    return 0;
}