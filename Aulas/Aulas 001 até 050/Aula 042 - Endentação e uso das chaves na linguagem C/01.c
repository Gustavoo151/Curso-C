#include <stdio.h>

/*
        Aula 042: Endentação e uso das chaves
*/

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Resultado lógico: %d\n", a < 0);

    if (a < 0){
        printf("É negativo\n");
    }
    else {
        printf("É positivo ou ígual a zero!\n");
        printf("É positivo ou ígual a zero!\n");
    }
    
    return 0;
}