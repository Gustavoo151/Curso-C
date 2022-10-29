#include <stdio.h>
#include <stdlib.h>

//  Aula 186: Por que não usamos o & ao ler uma string com a função scanf?

int main(){

    char palavra[100];

    // scanf("%100[^\n]", palavra);
    // printf("%s\n", palavra);

    printf("%p\n", palavra); // O vetor fica de forma sequêncial na memória
    printf("%p\n", &palavra); // Enão ele vai retorna o endereço da primeira posiçõa do vetor
    printf("%p\n", &palavra[0]); // Quando criamos um vetor o node em si dele já é um ponteiro

    return 0;
}