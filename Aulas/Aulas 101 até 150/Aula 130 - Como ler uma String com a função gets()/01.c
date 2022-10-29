#include <stdio.h>
#include <stdlib.h>

/*
        Aula 130: Lendo uma String com a função gets()
*/

int main(){

    char palavras[10] = {"Oi. Vamos aprender a programar com a linguagen C?"};

    printf("Digite seu nome: ");
    // scanf("%20[^\n]", palavras);

    gets(palavras); // Não é muito recomendado usar essa função [É uma função perigosa] . Não inporta quantos caracteres eu informar o gets vai colocar dentro da função, podendo até passar do tamanho vetor fazendo o programa sobreecrever memória

    printf("%s\n\n", palavras);

    return 0;
}