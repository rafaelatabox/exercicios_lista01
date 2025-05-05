
#include <stdio.h>

int main() {
    int n, i;
    int opcao;
    float soma = 0;
    float media;
    
    printf("Escolha o tipo de media:\n");
    printf("1 - Media Simples\n");
    printf("2 - Media Ponderada\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    
    printf("Quantos numeros voce vai inserir? ");
    scanf("%d", &n);

    float numeros[n], pesos[n];

    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    if (opcao == 1) {
    
        for (i = 0; i < n; i++) {
            soma += numeros[i];
        }
        media = soma / n;
    } else if (opcao == 2) {
        
        float somaPesos = 0;
        for (i = 0; i < n; i++) {
            printf("peso para o numero %.2f: ", numeros[i]);
            scanf("%f", &pesos[i]);
        }
        for (i = 0; i < n; i++) {
            soma += numeros[i] * pesos[i];
            somaPesos += pesos[i];
        }
        media = soma / somaPesos;
    } else {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("A media calculada ao: %.2f\n", media);

    return 0;
}
