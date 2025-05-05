
#include <stdio.h>

int main() {
    int inicio;
    int fim;
    int incremento;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    printf("Sequência de números: ");
    for (int i = inicio; i <= fim; i += incremento) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}