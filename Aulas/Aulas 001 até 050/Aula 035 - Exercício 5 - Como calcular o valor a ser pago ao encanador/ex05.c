#include <stdio.h>

int main(){

    float dias, valorFinal, desconto;

    printf("Quantos dias trabalhados? ");
    scanf("%f", &dias);

    valorFinal = dias * 45;
    desconto = valorFinal * 8/100;
    valorFinal = valorFinal - desconto;

    printf("A receber: RS%.2f\nDesconto R$%.2f\n", valorFinal, desconto);

    return 0;
}