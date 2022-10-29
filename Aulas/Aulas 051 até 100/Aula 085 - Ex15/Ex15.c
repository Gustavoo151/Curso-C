/*
15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/

#include <stdio.h>

int main(){

    int num1, num2, somaNum = 0;

    printf("Digite os dois valores da multiplicação: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num2; i++)
        somaNum += num1;

    printf("%d x %d = %d\n", num1, num2, somaNum);

    return 0;
}