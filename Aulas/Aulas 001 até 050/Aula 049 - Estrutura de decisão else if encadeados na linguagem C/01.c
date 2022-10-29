#include <stdio.h>
#include <stdlib.h>
/*
    Aula 049 - Else if encadeados
*/

int main(){
    int a = 10;

    printf("\nDigite um valor qualquer: ");
    sncaf("%d", &a);


    // Primeira versão
    if (a < 0)
        printf("\n\tValor Negativo!\b");
    else{
        if (a > 0)
            printf("\n\tValor positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");
    }

    // Segunda versão
    if (a < 0)
        printf("\n\tValor Negativo!\b");
    else if (a > 0)
        printf("\n\tValor positivo!\n");
    else
        printf("\n\tValor igual a zero!\n");
    
    return 0;
}