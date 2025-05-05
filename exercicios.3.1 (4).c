#include <stdio.h>
#include <math.h>


double calcular_perimetro_quadrado(double lado) {
    return 4 * lado;
}

double calcular_area_quadrado(double lado) {
    return lado * lado;
}

double calcular_perimetro_retangulo(double base, double altura) {
    return 2 * (base + altura);
}

double calcular_area_retangulo(double base, double altura) {
    return base * altura;
}

double calcular_perimetro_triangulo(double lado1, double lado2, double lado3) {
    return lado1 + lado2 + lado3;
}

double calcular_area_triangulo(double base, double altura) {
    return 0.5 * base * altura;
}

double calcular_perimetro_circulo(double raio) {
    return 2 * M_PI * raio;
}

double calcular_area_circulo(double raio) {
    return M_PI * raio * raio;
}


int main() {
    int escolha;
    double lado, base, altura, raio;

    printf("Escolha uma forma geométrica:\n");
    printf("0. Quadrado\n");
    printf("1. Retângulo\n");
    printf("2. Triângulo\n");
    printf("3. Círculo\n");
    printf("4. sair\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 0: // Quadrado
            printf("o lado do quadrado: ");
            scanf("%lf", &lado);
            printf("Perímetro do quadrado: %.2lf\n", calcular_perimetro_quadrado(lado));
            printf("Área do quadrado: %.2lf\n", calcular_area_quadrado(lado));
            break;
        case 1: // Retângulo
            printf("o valor da base do retângulo: ");
            scanf("%lf", &base);
            printf("o valor da altura do retângulo: ");
            scanf("%lf", &altura);
            printf("Perímetro do retângulo: %.2lf\n", calcular_perimetro_retangulo(base, altura));
            printf("Área do retângulo: %.2lf\n", calcular_area_retangulo(base, altura));
            break;
        case 2: // Triângulo
            printf("a base do triângulo: ");
            scanf("%lf", &base);
            printf("o valor da altura do triângulo: ");
            scanf("%lf", &altura);
            printf("o valor do lado 1 do triângulo: ");
            scanf("%lf", &lado);
            printf("o valor do lado 2 do triângulo: ");
            scanf("%lf", &lado);
            printf("o valor do lado 3 do triângulo: ");
            scanf("%lf", &lado);
            printf("Perímetro do triângulo: %.2lf\n", calcular_perimetro_triangulo(base, lado, lado));
            printf("Área do triângulo: %.2lf\n", calcular_area_triangulo(base, altura));
            break;
        case 3: // Círculo
            printf("o valor do raio do círculo: ");
            scanf("%lf", &raio);
            printf("Perímetro do círculo: %.2lf\n", calcular_perimetro_circulo(raio));
            printf("Área do círculo: %.2lf\n", calcular_area_circulo(raio));
            break;
        case 4:
            printf("saindo...\n");
            break;
            printf("Opção inválida!\n");
            break;
         default:
    }

    return 0;