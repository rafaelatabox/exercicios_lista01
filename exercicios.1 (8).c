
#include <stdio.h>

int main() {
    float distancia; 
    float litros; 
    float consumo_medio;

    printf("com essa distancia percorrida posso ter (em km): ");
    scanf("%f", &distancia);

    printf("com a quantidade de combustivel consumido posso ter (em litros): ");
    scanf("%f", &litros);

    if (litros != 0) {
        
        consumo_medio = distancia / litros;

        printf("Consumo medio: %.2f km/l\n", consumo_medio);
    } else {
        printf("Erro: a quantidade de litros deve ser maior que zero.\n");
    }

    return 0;
}