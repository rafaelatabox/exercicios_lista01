
#include <stdio.h>

int main() {
    int num, 
    int i;
    long long factorial = 1; 

    printf(" um número inteiro positivo: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("O fatorial não é definido para números negativos.\n");
    } else if (num == 0) {
        printf("O fatorial de 0 é 1.\n");
    } else {
        
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }

        printf("O fatorial de %d é %lld\n", num, factorial);
    }

    return 0;
}