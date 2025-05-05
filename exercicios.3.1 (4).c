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

    printf("Escolha uma forma geom�trica:\n");
    printf("0. Quadrado\n");
    printf("1. Ret�ngulo\n");
    printf("2. Tri�ngulo\n");
    printf("3. C�rculo\n");
    printf("4. sair\n");
    printf("Digite o n�mero da sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 0: // Quadrado
            printf("o lado do quadrado: ");
            scanf("%lf", &lado);
            printf("Per�metro do quadrado: %.2lf\n", calcular_perimetro_quadrado(lado));
            printf("�rea do quadrado: %.2lf\n", calcular_area_quadrado(lado));
            break;
        case 1: // Ret�ngulo
            printf("o valor da base do ret�ngulo: ");
            scanf("%lf", &base);
            printf("o valor da altura do ret�ngulo: ");
            scanf("%lf", &altura);
            printf("Per�metro do ret�ngulo: %.2lf\n", calcular_perimetro_retangulo(base, altura));
            printf("�rea do ret�ngulo: %.2lf\n", calcular_area_retangulo(base, altura));
            break;
        case 2: // Tri�ngulo
            printf("a base do tri�ngulo: ");
            scanf("%lf", &base);
            printf("o valor da altura do tri�ngulo: ");
            scanf("%lf", &altura);
            printf("o valor do lado 1 do tri�ngulo: ");
            scanf("%lf", &lado);
            printf("o valor do lado 2 do tri�ngulo: ");
            scanf("%lf", &lado);
            printf("o valor do lado 3 do tri�ngulo: ");
            scanf("%lf", &lado);
            printf("Per�metro do tri�ngulo: %.2lf\n", calcular_perimetro_triangulo(base, lado, lado));
            printf("�rea do tri�ngulo: %.2lf\n", calcular_area_triangulo(base, altura));
            break;
        case 3: // C�rculo
            printf("o valor do raio do c�rculo: ");
            scanf("%lf", &raio);
            printf("Per�metro do c�rculo: %.2lf\n", calcular_perimetro_circulo(raio));
            printf("�rea do c�rculo: %.2lf\n", calcular_area_circulo(raio));
            break;
        case 4:
            printf("saindo...\n");
            break;
            printf("Op��o inv�lida!\n");
            break;
         default:
    }

    return 0;