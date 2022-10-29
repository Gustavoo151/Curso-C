#include <stdio.h>

/*
        Aula 041: Verdadeiro e falso na liguagem C

    ZERO em C sempre significa FALSO, qualquer valor diferente de ZERO vai ser VERDADEIRO
*/

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Resultado lógico: %d\n", a < 0);

    if (a < 0)
        printf("É negativo\n");
    else 
        printf("É positivo ou ígual a zero!\n");

    return 0;
}