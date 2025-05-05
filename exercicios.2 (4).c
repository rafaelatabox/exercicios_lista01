#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b; 
    float c;
    float delta, x1, x2;

    printf(" o seu coeficiente a: ");
    scanf("%f", &a);
    printf(" o seu coeficiente b: ");
    scanf("%f", &b);
    printf(" o seu coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Não é uma equação do segundo grau.\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("as raízes reais: x1 = %.2f\n", x1);
        printf("as raízes reais: x2 = %.2f\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Uma raiz real: x = %.2f\n", x1);
        printf("Uma raiz real: x = %.2f\n", x2);
    } else {
        float parteReal = -b / (2 * a);
        float parteImaginaria = sqrt(-delta) / (2 * a);
        printf("Raízes complexas: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n",
               parteReal, parteImaginaria, parteReal, parteImaginaria);
    }

    return 0;
}