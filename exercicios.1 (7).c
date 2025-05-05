
#include <stdio.h>

int main() {
    float comprimento;
    float largura;
    float altura;
    float volume;

    
    printf("meu comprimento de caixa: ");
    scanf("%f", &comprimento);

    printf("minha largura de caixa: ");
    scanf("%f", &largura);

    printf("minha altura de caixa: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    
    printf("quanto meu volume de caixa é: %.2f\n", volume);

    return 0;
}