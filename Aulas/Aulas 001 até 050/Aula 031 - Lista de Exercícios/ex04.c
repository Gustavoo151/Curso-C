/*
4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

#include <stdio.h>

int main(){

    float valor_despesa, valor_gorjeta, numeros_pessoas, valor_total;

    printf("Digite o valor de depesa: ", &valor_despesa);
    scanf("%f", &valor_despesa);

    printf("Digite o valor da gorjeta: ");
    scanf("%f", &valor_gorjeta);

    printf("Digite o número de pessoas: ");
    scanf("%f", &numeros_pessoas);

    valor_total = (valor_gorjeta/100 + 1) * valor_despesa;

    printf("Com %.2f%% de gorjeta o valor total será R$%.2f e cada um terá que pagar R$%.2f\n", valor_gorjeta, valor_total, valor_total/numeros_pessoas);

    return 0;
}