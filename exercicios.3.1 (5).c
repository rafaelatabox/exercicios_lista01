
#include <stdio.h>

void decimal_para_binario(int numero) {
    int binario[32], i = 0;

    while (numero > 0) {
        binario[i] = numero % 2;
        numero /= 2;
        i++;
    }

    printf("Binário: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

void decimal_para_hexadecimal(int numero) {
    printf("Hexadecimal: %X\n", numero);
}

int main() {
    int numero;

    printf("meu numero decimal: ");
    scanf("%d", &numero);

    decimal_para_binario(numero);
    decimal_para_hexadecimal(numero);

    return 0;
}
