/*
5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/

#include <stdio.h>

int main(){

    float DIARIA = 45.00, dias, IMPOSTO = 8.0;

    printf("Digite a quantidade de dias de trabalho: ");
    scanf("%f", &dias);

    printf("Com %.2f dias de trabalho a empresa terá que pagar R$%.2f, já com %.2f%% imposto descontado\n", dias, DIARIA * dias *(1 - IMPOSTO/100), IMPOSTO);

    return 0;
}