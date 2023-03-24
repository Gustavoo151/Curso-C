#include <stdio.h>
#include <stdlib.h>

/*      Aula 238: imprindo e testando nossa FILA
        
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
    }
    else 
        printf("Lista vazia!\n");
    return remover;  // Retornando a posição atual do nó
}


void imprimirFila(No *fila){
    printf("\t------------- FILA -------------\n");
    while(fila){
        printf("%d ", fila->valor);
        fila = fila->proximo;
    }
    printf("\n\t------------- FIM FILA -------------\n");
}


int main(){
    No *remover, *fila = NULL;
    int opcao, valor;

    do{
        printf("\t0 - Sair\n\t1 - Inserir\n\t2 - remover\n\t3 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o valor a ser inserido:\n");
                scanf("%d", &valor);
                inserirNaFila(&fila,valor);
                break;
            case 2:
                remover = removerDaFila(&fila);  // Essa função retorna o ponteiro que foi removido
                if(remover){ // Verificando se não é um ponteiro NULL
                    printf("Removido: %d\n", remover->valor);
                    free(remover);  // Lipando da mémoria o ponteiro que foi removido
                }
                break;
            case 3:
                imprimirFila(fila);
                break;
            default:
                printf("Opcao invalida!!!\n");
        }
    } while(opcao);

    return 0;
}