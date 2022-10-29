/*
9) Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

#include <stdio.h>

int main(){

    int num, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        soma += i;

    printf("A soma de todos os números de 1 até %d é %d\n", num, soma);

    return 0;
}