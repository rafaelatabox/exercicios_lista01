
#include <stdio.h>

int main() {
    int c;
    int b; 
    int temp;

    printf("primeiro de c: ");
    scanf("%d", &c);
    printf("segundo de b: ");
    scanf("%d", &b);
     printf("terceiro de temp: ");
    scanf("%d", &temp);

    
    printf("\na troca:\n");
    printf("b = %d\n", c);
    printf("c = %d\n", b);
    printf("temp = %d\n",temp);
   
    temp = c;
    c = b;
    b = temp;
    temp = temp;

    printf("\nDepois da troca:\n");
    printf("c = %d\n", b);
    printf("b = %d\n", c);
    printf("temp = %d\n",c);
    printf("temp = %d\n",b);
    

    return 0;
}





