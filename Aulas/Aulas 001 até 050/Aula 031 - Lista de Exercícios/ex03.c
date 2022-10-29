/*
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/

#include <stdio.h>

void trocar_valores(int valor1, int valor2){
    int a = valor2, b = valor1;

    printf("A com valor de B: %d\nB com valor de A: %d\n\n", a,b);
}

int main(){

    int a,b;

    printf("\nDigite os valorores de A e B: ");
    scanf("%d %d", &a,&b);

    printf("\nValor de A: %d\nValor de B: %d\n\n", a,b);

    trocar_valores(a,b);

    return 0;
}