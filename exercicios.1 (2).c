
#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;
    float kelvin;

    printf("temperatura em Celsius:");
    scanf("%f", &celsius);
     printf("temperatura em fahrenheit:");
    scanf("%f", &fahrenheit);
     printf("temperatura em kelvin:");
    scanf("%f", &kelvin);
    
    celsius=(fahrenheit-32)/1,8;
    fahrenheit = (celsius * 9/5) + 32;
    kelvin =(celsius + 273.15);
    
    printf("Temperatura em celsius: %.2f\n",celsius);
    printf("\nTemperatura em Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperatura em Kelvin: %.2f\n", kelvin);

    return 0;
}