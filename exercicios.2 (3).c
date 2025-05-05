#include <stdio.h>

int main() {
    int ano;

    printf("primeiro ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Bissexto\n");
    } else {
        printf("Não Bissexto\n");
    }

    return 0;
}