
#include <stdio.h>

int main() {
    int anos; 
    int meses;
    int dias;
    
    printf("quero sua idade em anos: ");
    scanf("%d", &anos);
    printf("quero sua idade em meses: ");
    scanf("%d", &meses);
    printf("quero sua idade em dias: ");
    scanf("%d", &dias);
    
    int total_dias = (anos * 365) + (meses * 30) + dias;

    printf("esse total em dias é: %d\n", total_dias);

    return 0;
}




