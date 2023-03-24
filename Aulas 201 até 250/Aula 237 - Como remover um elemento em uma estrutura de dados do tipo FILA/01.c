#include <stdio.h>
#include <stdlib.h>

/*      Aula 237: Remoção em uma FILA
        
        FIFO - First-in, First-out - Primeiro a entrar, primeiro a sair        
*/

typedef struct no{
    int valor;
    struct no *proximo;
}No;


void inserirNaFila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){  // Verificando a memoria foi alocada
        novo->valor = num;  // Passando o valor de parametro para o nó da lista
        novo->proximo = NULL;   // Colocando o próximo como nulo que é o fim da fila
        if(*fila == NULL)  // Se a fila for igual a NULL então que quizer que a fila está vázia 
            *fila = novo; // Adicionando o primeito nó a fila
        else{  // se a fila não for vázia
            aux = *fila;  // No auxiliar para salvar o inicio da fila
            while(aux->proximo)  // Loop para chegar até o fim da fila
                aux = aux->proximo;  // Passando para o próximo nó para não entrar em um loop infinito
            aux->proximo = novo;  // Adicionando ao nó novo no último nó da lista
        }
    }
    else
        printf("Erro ao alocar memoria\n");
}


No* removerDaFila(No **fila){
    No *remover = NULL;  
    if(*fila){   // se fila for diferente de NULL
        remover = *fila;  // O nó remover recebe o conteúdo do ponteiro para ponteiro da fila
        *fila = remover->proximo;  // Fila está recebendo o próximo nó
        // Falta um free aqui
    }
    else 
        printf("Lista vazia!\n");
    return remover;  // Retornando a posição atual do nó
}

int main(){
    No *fila = NULL;


    return 0;
}