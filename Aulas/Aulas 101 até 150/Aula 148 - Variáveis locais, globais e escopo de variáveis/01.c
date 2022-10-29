#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//      Aula 148: Variáveis globais e escopo de variáveis

int idade2 = 35; // Para criar um variável basta criar ela no corpo do programa


void imprimir(int id){
    printf("Idade: %d\n", id);
}

int main(){

    int idade = 25;

    printf("Idade: %d\n", idade);

    imprimir(idade);

    return 0;
}