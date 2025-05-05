#include <stdio.h>

int main() {
    int numero;
    int original;
    int reverso = 0;
    int resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    original = numero;

    while (numero != 0) {
        resto = numero % 10;
        reverso = reverso * 10 + resto;
        numero /= 10;
    }

    if (original == reverso) {
        printf("ao pala­ndromo\n");
    } else {
        printf("Nao ao pala­ndromo\n");
    }

    return 0;
}
