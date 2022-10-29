#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nomes[5][25];
    int l, k1;

    for(l = 0; l < 5; l++){
        printf("\nDigite o nome da posicao %d. ", l);  // para adicionar um string em vetor basta só escolher qual linha adiconar nõa precisa selecionar a coluna
        scanf(" %25[^\n]", nomes[l]); // Adicionando um espaço na frente para iginorar o buffer de \n e espaço
    }

    for(l = 0; l < 5; l++)
        printf("\nNome na posicao %d: %s\n", l, nomes[l]);

    return 0;
}