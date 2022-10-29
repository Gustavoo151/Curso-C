#include <stdio.h>

/*
        Aula 040: Decisão completa
    Verificando seum número é negativo

    Brasília é a capital do Brasil?
*/

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    if (a < 0){ 
        printf("É negativo\n");
    }
    
    else 
        printf("É positivo ou ígual a zero!\n");

    return 0;
}