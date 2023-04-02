#include <stdio.h>
#include <stdlib.h>

/*  Aula 239: Estrutura Fila - Segunda Versão

    FIFO - First-int, First-Out - Primeiro a entrar, Primeiro a sair
*/

typedef struct no {  // Struct para ligar no a no
    int valor;

    struct no *proximo
}No;


typedef struct {
    No *primeiro;
    No *ultimo;
    int tam;
}Fila;


void criarFila(Fila *fila){  // Criando essa estrutura para salvar o primeiro e ultmimo dnó da fila
    fila->primeiro = NULL;
    fila->ultimo = NULL;
    fila->tam = 0;
}

void inserirNaFila(Fila *fila, int num){

    No *aux, *novo = malloc(sizeof(No)); 

    if(novo){ 
        novo->valor = num; 
        novo->proximo = NULL; 
        if(fila->primeiro == NULL){  
            fila->primeiro = novo; 
            fila->ultimo = novo;
        }
        else{ 
            fila->ultimo->proximo = novo;  // Acessando o ultimo nó e colocando o nó novo como próximo nele
            fila->ultimo = novo;
        }
        fila->tam++; // Tirei de dentro das duas fericações porque idependete se é vázio ou não sempre vai incrementar mais um
    }
    else 
        printf("\nErro ao alocar menória.\n");
}


No* removerDaFila(Fila *fila){
    No *remover = NULL;  
    if(fila->primeiro){  // Verificando se o primeiro é NULL
        remover = fila->primeiro;
        fila->primeiro = remover->proximo; 
        fila->tam++;
    }
    else 
        printf("Lista vazia!\n");
    return remover;  // Retornando a posição atual do nó
}


void imprimirFila(Fila *fila){
    No *aux = fila->primeiro;  // Vamos ter que criar um ponteiro auxiliar para não altera o valor da fila original, pois estamos recebendo o endereço de memória da fila.
    printf("\t------------- FILA -------------\n");
    while(aux){
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n\t------------- FIM FILA -------------\n");
}


int main(){
    No *remover;
    Fila fila;
    int opcao, valor;

    criarFila(&fila);

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
                imprimirFila(&fila);
                break;
            default:
                printf("Opcao invalida!!!\n");
        }
    } while(opcao);

    return 0;
}