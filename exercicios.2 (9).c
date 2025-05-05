#include <stdio.h>
#include <stdio.h>

int main() {
    float numero;
    float limite_inferior;
    float limite_superior;

    printf(" o numero: ");
    scanf("%f", &numero);

    printf("o limite inferior do intervalo: ");
    scanf("%f", &limite_inferior);

    printf("o limite superior do intervalo: ");
    scanf("%f", &limite_superior);

    if (numero >= limite_inferior && numero <= limite_superior) {
        printf("Dentro\n");
    } else {
    if (numero >= limite_inferior && numero <= limite_superior)
        printf("Fora\n");
    }

    return 0;
}