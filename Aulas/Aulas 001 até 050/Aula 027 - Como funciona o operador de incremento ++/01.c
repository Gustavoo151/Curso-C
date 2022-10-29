#include <stdio.h> 

int main(){

    int contador_1 = 10, contador_2 = 10;

/*
    Todas essas são iguais
    contador ++;
    contador += 1;
    contador = contador + 1
*/


    printf("Valor: %d\n", ++contador_1); // Se adicionar o ++ antes, ele adiciona antes de ler
    printf("Valor: %d", contador_2++); // se adicionar depois ele adiciona depois de ler

    return 0;
}