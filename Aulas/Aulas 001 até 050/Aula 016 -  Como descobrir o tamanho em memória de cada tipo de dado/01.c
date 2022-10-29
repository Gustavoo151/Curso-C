#include <stdio.h>

/*
      Operador sizeof
    sizeof x ou sizeof(int)
*/

int main(){

    float x = 1.0;

    printf("Tamanho em memoria de um float: %d bytes\n", sizeof(x));  // Pegando o tamanho em memória de uma variável (não é obrigado usar parênteses)
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));  // Pegando o tamanho em memória de um tipo primitivo (é obrigatório usar parênteses)
    printf("Tamanho em memoria de um char: %d bytes\n", sizeof(char));



return 0;
}