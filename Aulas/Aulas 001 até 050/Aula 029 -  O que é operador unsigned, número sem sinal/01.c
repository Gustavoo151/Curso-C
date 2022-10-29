#include <stdio.h>

/*
        Aula 029
    Operador unsigned
    Trocar d %d por %u
    Limite pra o tipo int: 2.147.483.647
    short int pode ser impresso como -> %d ou %hi
    unsigned short int -> %hu ou %d
    unsigned long int -> %lu
*/

int main(){

    unsigned int x = 2147483647; // Serve para para anular a parte negativa do inteiro x [A vantagem de usar o usigned é a economia de memória]
    /* 
    Quando eu quero um número que não cabe em 4 bytes e não é nagativo eu posso usar o unsigned para dizer para o computador que eu quero todos os 4 bytes para armazenar números positivos. E então troca-se o %d para %u
    */

    unsigned short int y = 55000;

    printf("\n\t %d \n\n", y);
    printf("\n\t%u\n\n", ++x);

    return 0;
}