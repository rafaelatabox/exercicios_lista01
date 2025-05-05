#include <stdio.h>

int main() {
    float salarioatual;
    float percentual;
    float novoSalario;

    
    printf("o meu salario atual: ");
    scanf("%f", &salarioatual);

    printf(" o percentual desse reajuste (ex: 10 para 10%%): ");
    scanf("%f", &percentual);

    novoSalario = salarioatual + (salarioatual * percentual / 100);

    
    printf("O novo salario com reajuste ao: R$ %.2f\n", novoSalario);

    return 0;
}
