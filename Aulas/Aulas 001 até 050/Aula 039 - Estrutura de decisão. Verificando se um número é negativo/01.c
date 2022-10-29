#include <stdio.h>

/*
        Aula 039: Decisão simples
    Verificando seum número é negativo

    Brasília é a capital do Brasil?
*/

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    if (a < 0){ 
        printf("É negativo");
    }
    
    else if (a > 0){
        printf("É positivo\n");
    }

    return 0;
}