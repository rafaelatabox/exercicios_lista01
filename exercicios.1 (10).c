
#include <stdio.h>

int main() {
  
  float valorOriginal;
  float percentualDesconto; 
  float valorComDesconto;
  float valorDesconto;
  
  printf("tenho o valor original do produto: ");
  scanf("%f", &valorOriginal);
  printf("esse meu percentual de desconto (ex: 5 a 20%%): ");
  scanf("%f", &percentualDesconto);
  
  valorDesconto = (valorOriginal * percentualDesconto) / 100;
  valorComDesconto = valorOriginal - valorDesconto;
  
  printf("esse produto esta com o valor do desconto é: %.2f\n", valorComDesconto);

  return 0;
}