#include <stdio.h>

int main(){

    float valorReal, valorDolar;

    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / 5.3;
    printf("Valor emn dolar $%.2f\n", valorDolar);

    return 0;
}