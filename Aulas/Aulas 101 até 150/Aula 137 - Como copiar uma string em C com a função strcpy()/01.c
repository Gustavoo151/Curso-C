#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
            Aula 137: Copiando uma String com a função strcpy()
*/
int main(){

    char palavras1[50]  = {"bola"};
    char palavras2[50]  = {"abacate"};

    // palavras1 = palavras2  # Isso não funciona em C. Só da para usar isso para números

    printf("antes de copiar:\nPalavra1: %s\nPalavra2: %s\n",palavras1, palavras2);  //


    strcpy(palavras2, palavras1);  // Função que faz a cópia de uma string. O primeiro parâmetro é onde queremos salvar a cópia e o segundo é qual será copiada

    printf("\n");
    printf("Depois de copiar:\nPalavra1: %s\nPalavra2: %s\n", palavras1, palavras2);  //

    return 0;
}