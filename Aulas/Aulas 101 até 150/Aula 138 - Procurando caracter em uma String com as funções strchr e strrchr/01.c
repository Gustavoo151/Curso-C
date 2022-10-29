#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
            Aula 138 : Procurando caracteres em uma string com as funções strchr e srtrchr
        strchar -> retorna a primeira ocorrência (Retorna um ponteiro)
        strrchr -> Retorna a última ocorrência 
*/


int main(){

    char palavra[50] = {"abacate"};
    char *letra;
    
    letra = strchr(palavra, 'a');  // Primeira parametro passar o vetor, segundo parâmetro passa a letra desejada

    printf("%c\n", *letra); // Tem que colocar o * na frente da variável para poder printar a palavra

    printf("%c\n", *(letra + 1)); // Fezendo a aritmetrica de ponteiro para achar a próxima letra, basta adicionar mais um.

    printf("%c\n\n", *(letra + 2)); // Fezendo a aritmetrica de ponteiro para achar a próxima letra, basta adicionar mais 2.


    letra = strrchr(palavra, 'a'); // Retorna um ponteiro com a última ocorrência

    printf("%c\n", *letra);

    printf("%c\n", *(letra + 1));
    printf("%c\n", *(letra + 2));

    letra = strrchr(palavra, 'z'); // Se o caractere não exisitir na string a função strrchr vai restornar NULL

    return 0;
}