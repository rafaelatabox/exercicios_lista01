
#include <stdio.h>

int main() {
    int numero, i, ehPrimo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0; 
    } else {
        for (i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo)
        printf("Primo\n");
    else
        printf("Não Primo\n");

    return 0;
}
