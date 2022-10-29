#include <stdio.h>
#include <stdlib.h>

/*
        Aula 132: Como identificar o final de uma string?
*/

int main(){

    int i;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagen C?"};

    printf("Digite seu nome: ");
    // scanf("%20[^\n]", palavras);
    // gets(palavras); 
    fgets(palavras, 55, stdin); 

    i = 0;
    while(palavras[i] != '\0') { // O \0 é o caractere que representa o fim da string
        printf("%d = %d\n", i, palavras[i]);   // Usando o %d vamos imprir o código da tabela ASCII
        printf("%d = %c\n", i, palavras[i]);   // Usando o %d vamos imprir o código da tabela ASCII
        i ++;                                  // O programa reconhce o \n como string
    }
    printf("\n");

    return 0;
}