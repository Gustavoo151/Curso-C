/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &num);

    if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0)
        printf("Número não divisível por 2, 3 e 5\n");

    else if (num % 2 == 0)
        printf("Número divisível por 2\n");

    if (num % 3 == 0)
        printf("Número devisível por 3\n");

    if (num % 5 == 0)
        printf("Número divisível por 5\n");

    return 0;
}