#include <stdio.h>
#include <stdlib.h>

/*
    Exercicio

    3) Escreva um algoritmo para inverter a ordem das letras da ceda palavra de uma string, presevando a ordem das palavras, dado texto:
    ABRA A POR MARIQUINHA a sapia deve ser ARBA A ATROP AHNIUQIRAM.
*/

typedef struct no{
    char letras;
    struct No *proximo;
}No;


No* empilhar(No *pilha, char letra){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->letras = letra;
        novo->proximo = pilha;
        return novo;
    }
    else 
        printf("Erro ao alocar memoria");
    return NULL;
}

/*
No* remove(No **pilha){
    printf("Falta implementar!!!");
}*/


void imprime(No *pilha){
    while(pilha){
        printf("%c", pilha->letras);
        pilha = pilha->proximo;
    }
}


//int argv, char **argsv
int main(){
    No *pilha = NULL;
    char frase[] = "gustavo oliveira";

    int tamFrase = sizeof(frase)/sizeof(char);


    for (int i = 0; i < tamFrase; i++){
        pilha = empilhar(pilha, frase[i]);
    }

    imprime(pilha);
    return 0;
}