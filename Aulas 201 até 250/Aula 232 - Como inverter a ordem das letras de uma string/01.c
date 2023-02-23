#include <stdio.h>
#include <stdlib.h>

/*
    Exercicio

    3) Escreva um algoritmo para inverter a ordem das letras da ceda palavra de uma string, presevando a ordem das palavras, dado texto:
    ABRA A POR MARIQUINHA a sapia deve ser ARBA A ATROP AHNIUQIRAM.
*/

typedef struct no{
    char caracter;
    struct No *proximo;
}No;


No* empilhar(No *pilha, char valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->caracter = valor;
        novo->proximo = pilha;
        return novo;
    }
    else 
        printf("Erro ao alocar memoria");
    return NULL;
}


No* desempilhar(No **pilha){
    No *remover = NULL;

    if(*pilha){
        remover = *pilha;
        *pilha = remover->proximo;
    }
    else
        printf("Pilha vazia\n");
    return remover;
}


void inveterPalavras(char x[]){
    int i = 0;
    No *remover, *pilha = NULL;

    while(x[i] != "\0"){
        if(x[i] != ' ')
            pilha = empilhar(pilha, x[i]);
        else{
            while(pilha){
               remover = desempilhar(&pilha);
               printf("%c", remover->caracter);
               free(remover);
            }
            printf(" ");
        }
        i++;
    }
    while(pilha){
        remover = desempilhar(&pilha);
        printf("%c", remover->caracter);
        free(remover);
    }
    printf("\n");
}


int main(){
    char texto[50] = {"Gustavo oliveira"};

    inveterPalavras(texto);

    return 0;
}