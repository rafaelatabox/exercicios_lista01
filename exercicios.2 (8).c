#include <stdio.h>
#include <math.h>

int main() {
    float capital;
    float taxa;
    float montante;
    int tempo;

    printf("capital inicial: ");
    scanf("%f", &capital);

    printf("taxa de juros (em %%): ");
    scanf("%f", &taxa);

    printf(" o tempo (em períodos): ");
    scanf("%d", &tempo);

    taxa = taxa / 100;

    montante = capital * pow((1 + taxa), tempo);

    printf("Montante final: R$ %.2f\n", montante);

    return 0;
}