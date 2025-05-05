
#include <stdio.h>

int main() {
    int n;
    int i;
    int termo1 = 0;
    int termo2 = 1;
    int proximo;


    printf("Insira a quantidade de termos da sequencia de Fibonacci:\n");
    scanf("%d", &n);

    
    printf("Sequencia de Fibonacci:\n");
    if (n <= 0) {
        printf("A quantidade de termos deve ser maior que zero.\n");
    } else {
        for (i = 0; i < n; i++) {
            if (i <= 1) {
                proximo = i; 
            } else {
                proximo = termo1 + termo2; 
                termo1 = termo2; 
                termo2 = proximo;
            }
            printf("%d ", proximo); 
        }
        printf("\n");
    }

    return 0;
}