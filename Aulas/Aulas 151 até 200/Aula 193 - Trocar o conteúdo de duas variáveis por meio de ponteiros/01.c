/*
2) Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
ser: void troca(float *a, float *b);
*/

#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float c;
    
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    float a = 10, b = 2;

    printf("Valor de a antes: %.2f\n", a);
    printf("Valor de b antes: %.2f\n", b);

    troca(&a, &b);

    printf("\nValor de a depois: %.2f\n", a);
    printf("Valor de b depois: %.2f\n", b);


    return 0;
}