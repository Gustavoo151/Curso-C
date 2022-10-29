#include <stdio.h>

/*
        Aula 043: Operador ternário em C
        Condição ? verdeiro : falso
*/

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    a < 0 ? printf("É negativo\n") : printf("É positivo ou ígual a zero!\n");


    printf("\n\nIf Else\n\n");
    printf("Resultado lógico: %d\n", a < 0);

    if (a < 0){
        printf("É negativo\n");
    }
    else {
        printf("É positivo ou ígual a zero!\n");
    }
    
    return 0;
}