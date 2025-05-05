#include <stdio.h>

int main() {
  float nota1;
  float nota2;
  float nota3;
  
  int peso1; 
  int peso2; 
  int peso3;
  
  float media;

  printf("a primeira nota: ");
  scanf("%f", &nota1);
  printf("esse peso da primeira nota: ");
  scanf("%d", &peso1);

  printf("a segunda nota: ");
  scanf("%f", &nota2);
  printf("esse peso da segunda nota: ");
  scanf("%d", &peso2);

  printf(" a terceira nota : ");
  scanf("%f", &nota3);
  printf("esse peso da terceira nota: ");
  scanf("%d", &peso3);

  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  printf("A média é: %.2f\n", media);

  return 0;
}