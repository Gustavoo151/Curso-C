/*
5) Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
*/
#include <stdio.h>
#include <stdlib.h>

int strcpy2(char *destino, char *origem){
    int i = 0;

    while(*(origem + i) != '\0'){
        *(destino +i) = *(origem + i);
        i++;
    }
    *(destino + i) = '\0';  // Tem que adicionar o '\0' pq a string ainda não tem o caractere de fim de string 

    return i;  // Restornando o tamanho da string caso precise
}

int main(){

    char destino[30];
    char origem[30] = "Jose Gustavo de oliveira cunha";

    strcpy2(destino, origem);

    printf("%s\n", destino);

    return 0;
}
