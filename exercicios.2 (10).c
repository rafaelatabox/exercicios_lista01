#include <stdio.h>
#include <stdio.h>

int main() {
    float num1;
    float num2; 
    float num3; 
    float num4;
    float limite;
    float media;

    printf("o primeiro numero digitado: ");
    scanf("%f", &num1);

    printf("o segundo numero digitado: ");
    scanf("%f", &num2);

    printf("o terceiro numero digitado: ");
    scanf("%f", &num3);

    printf("o quarto número digitado: ");
    scanf("%f", &num4);

    printf("o valor limite digitado: ");
    scanf("%f", &limite);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("Média: %.2f\n", media);

    if (media > limite) {
        printf("A media ao maior que o limite.\n");
    } else if (media < limite) {
        printf("A media ao menor que o limite.\n");
    } else if (media = limite) {
        printf("A media aoigual ao limite.\n");
    }

    return 0;
}