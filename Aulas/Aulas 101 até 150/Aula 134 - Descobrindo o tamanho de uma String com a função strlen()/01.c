#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Módulo Necessário para quando for tratar funções

/*
        Aula 134: Descobrindo o tamanho de uma String com a função strlen()
*/

int main(){

    int tam;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagen C?"};

    // printf("Digite algo: ");
    // scanf("%20[^\n]", palavras);
    // gets(palavras); 
    // fgets(palavras, 55, stdin); 

    printf("Tamnho: %d\n", strlen(palavras));

    return 0;
}