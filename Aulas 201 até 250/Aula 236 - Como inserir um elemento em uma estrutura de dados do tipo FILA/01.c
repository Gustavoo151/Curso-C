#include <stdio.h>
#include <stdlib.h>

/*      Aula 236: inserção em uma FILA
        
        FIFO - First-in, First-out - Primeiro a entrar, primeiro a sair        
*/

typedef struct no{
    int valor;
    struct no *proximo;
}No;


void inserirNaFila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL)
            *fila = novo;
        else{
            aux = *fila;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("Erro ao alocar memoria\n");
}




int main(){
    No *fila = NULL;


    return 0;
}