#include <stdio.h>

/*
        Aula 045: Operador ternário aninhado
*/

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Operador ternário:\n");
    a < 0 ? printf("É negativo\n") : // Usando o : para deixar aninhado
        a > 0 ? printf("\n\tValor positivo!\n") : printf("\n\tValor igual a zero!\n");

    return 0;
}