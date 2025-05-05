
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1; 

    printf("=== Jogo de Adivinhaacao ===\n");
    printf("Tente adivinhar o numero entre 1 e 100.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSecreto) {
            printf("O numero  MAIOR!\n");
        } else if (palpite > numeroSecreto) {
            printf("O numero  MENOR!\n");
        } else {
            printf("Parabens! Vocoª acertou em %d tentativas.\n", tentativas);
        }

    } while (palpite != numeroSecreto);

    return 0;
}