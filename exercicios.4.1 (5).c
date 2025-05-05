
#include <stdio.h>

int main() {
    int num;
    int i;
    
    
    printf(" gera a tabuada completa: ");
    scanf("%d", &num);
    
    printf("Tabuada de %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
