#include <stdio.h>

int main() {
    float a1; 
    float b1; 
    float c1;
    float a2;
    float b2;
    float c2;
    float x;
    float y;
    float det;

    printf("coeficiente a1: ");
    scanf("%f", &a1);
    printf("coeficiente b1: ");
    scanf("%f", &b1);
    printf("coeficientes c1: ");
    scanf("%f", &c1);

    printf("coeficiente a2: ");
    scanf("%f", &a2);
    printf("coeficiente b2: ");
    scanf("%f", &b2);
    printf("coeficientes c2: ");
    scanf("%f", &c2);
    

    
    det = a1 * b2 - a2 * b1;

    if (det == 0) {
        printf("O sistema não tem solução única.\n");
    } else {
        x = (c1 * b2 - c2 * b1) / det;
        y = (a1 * c2 - a2 * c1) / det;

        printf("Solução: x = %.2f\n", x);
        printf("Solução: y = %.2f\n", y);
    }

    return 0;
}