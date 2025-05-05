
#include <stdio.h>

#define PI 3.14159  

int main() {
    float raio, area;

    
    printf("raio do círculo: ");
    scanf("%f", &raio);
    printf("area do círculo: ");
    scanf("%f", &area);

    area = PI * raio * raio;

    printf("raio do circulo:%.2f\n",raio);
    printf("area do circulo: %.2f\n", area);

    return 0;
}