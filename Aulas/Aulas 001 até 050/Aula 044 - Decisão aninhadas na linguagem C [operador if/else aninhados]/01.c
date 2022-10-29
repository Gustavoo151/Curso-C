#include <stdio.h>

/*
        Aula 044: Decisões aninhadas
*/

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Operador ternário");
    a < 0 ? printf("É negativo\n") : printf("É positivo ou ígual a zero!\n");

    printf("\n\nIf Else\n\n");
    printf("Resultado lógico: %d\n", a < 0);

    if (a < 0){
        printf("É negativo\n");
    }
    else {
        if (a > 0)
            printf("\n\tValor positvo!");
        else
            printf("\n\tValor igual a zero!\n");
    }
    
    return 0;
}