#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 146: Criando um procedimento para imprimir uma string caractere por caractere.
*/

// Retorna o tamanho da string
int minhaStrLem(char str[]){  // Tem que colocar o tipo do parâmentro
    int tam = 0;

    while (str[tam] != '\0'){
        tam++;
    }
    return tam;
}

// Função que imprime caractere por caractere
void mostrarCaracte(char str[]){
    int cont = 0;

    while(str[cont] != '\0'){
        printf("%c\n", str[cont]);
        cont++;
    }
}


int main(){

    int tamanhoString;

    char palavra[30]= {"Gustavo de oliveira"};

    tamanhoString = minhaStrLem(palavra);
    printf("O tamanho da string é %d \n", tamanhoString);     

    mostrarCaracte(palavra);


    return 0;
}