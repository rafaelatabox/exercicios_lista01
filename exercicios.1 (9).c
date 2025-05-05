
#include <stdio.h>

int main() {
    int Segundos;
    int horas; 
    int minutos;
    int segundos;

    printf("esse tempo vira em segundos: ");
    scanf("%d", &Segundos);

    horas = Segundos / 3600;
    minutos = (Segundos % 3600) / 60;
    segundos = Segundos % 60;

    printf("Tempo formatado: %02d:\n", horas);
    printf("Tempo formatado: %02d:\n", minutos);
    printf("Tempo formatado: %02d:\n", segundos);
    
    return 0;
}