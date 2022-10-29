/*
6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
*/

#include <stdio.h>

int main(){

    float TAXA_CAMBIO = 5.30, valor_em_real;

    printf("Digite o valor em Real: ");
    scanf("%f", &valor_em_real);

    printf("%.2f Reais em Dólares é: $%.2f\n", valor_em_real, valor_em_real / TAXA_CAMBIO);

    return 0;
}