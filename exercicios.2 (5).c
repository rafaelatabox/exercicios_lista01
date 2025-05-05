#include <stdio.h>
#include <math.h>

int main() {
    float lado1;
    float lado2;
    float lado3;

    printf("o lado do triangulo lado1: ");
    scanf("%f", &lado1);
     printf("o lado do triangulo lado2: ");
    scanf("%f", &lado2);
     printf("o lado do triangulo lado3: ");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Pode formar triangulo\n");
    } else {
        printf("Não pode formar triangulo\n");
    }

    return 0;
}
