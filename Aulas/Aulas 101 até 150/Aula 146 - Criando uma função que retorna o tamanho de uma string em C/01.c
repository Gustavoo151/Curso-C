#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 146: Criando uma função que retorna o tamanho de uma string.
*/

// Retorna o tamanho da string
int minhaStrLem(char str[]){  // Tem que colocar o tipo do parâmentro
    int tam = 0;

    while (str[tam] =! '\0')
    {
        tam++;
    }

    return tam;
}

int main(){

    int tamanhoString;

    char palavra[10]= {"Gustavo"};

    tamanhoString = minhaStrLem(palavra);

    printf("O tamanho da string é %d \n", tamanhoString);     


    return 0;
}