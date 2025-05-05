#include <stdio.h>

int main() {
    double tempo_inicial, tempo_final, espaco_inicial, espaco_final;
    double velocidade_media, aceleracao, distancia;

    printf("tempo inicial (s): ");
    scanf("%lf", &tempo_inicial);
    printf("tempo final (s): ");
    scanf("%lf", &tempo_final);
    printf("espaço inicial (m): ");
    scanf("%lf", &espaco_inicial);
    printf("espaço final (m): ");
    scanf("%lf", &espaco_final);

    
    velocidade_media = (espaco_final - espaco_inicial) / (tempo_final - tempo_inicial);

    aceleracao = velocidade_media / (tempo_final - tempo_inicial);

    distancia = espaco_final - espaco_inicial;

    // Exibir resultados
    printf("\nVelocidade Media: %.2lf m/s\n", velocidade_media);
    printf("Aceleração: %.2lf m/s²\n", aceleracao);
    printf("Distância Percorrida: %.2lf m\n", distancia);

    return 0;
}
