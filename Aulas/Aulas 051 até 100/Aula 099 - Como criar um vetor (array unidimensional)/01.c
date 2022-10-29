#include <stdio.h>

int main(){

    int idade;
    char sexo;
    float n1;

    int mun1[10];
    int num2[] = {1,5,9,15,43};
    int num3[5] = {4, 7, 5}; // Quando separamos um vetor com 5 valores e só preechemos 3 ele adiciona 0 aos outro espaços vazios. {4, 7, 5, 0, 0}
    int num4[5] = {1,2,3,4,5,6}; // Quando informamos o tamanho do vetor a adicionamos elementos a mais ele ignora os elemento que passaram. {1,2,3,4,5} o elemento 6 foi descartado.
    int num5[5] = {0}; // Para preencher um vetor com 0.

    char letras[100];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    float notas[3] = {7.5, 8.3, 9.5}; 

    return 0;
}