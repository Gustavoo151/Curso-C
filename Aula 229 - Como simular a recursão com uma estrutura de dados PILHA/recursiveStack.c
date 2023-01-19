#include <stdio.h>
#include <stdlib.h>

/*
    Aula 229: Algoritmo feito po mim
*/

typedef struct {
    int num;
}fatores;


typedef struct no{   // Criando a ligação de todos os nos
    fatores numeros;
    struct No *proximo;
}No;


No* empilhar(No *topo, int numFac){  // Recebendo o nó topo como parametro
    No *novo = malloc(sizeof(No));  // Reservendo um espaço na para alocar o struct No

    if(novo){  // Verificando se a memória foi alocada
            novo->numeros.num = numFac;  // Recebe os numeros para calcular o factorial
            novo->proximo = topo; 
            return novo;
    } 
    else
        printf("\nErro ao alocar memoria...\n");
    return NULL;
}


No* desempilhar(No **topo){

    if (topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover; 
    }
    else
        printf("Prilha vazia!\n");
    return NULL;
}


void imprimir(No *topo, int *result){
    while (topo != NULL){       
        printf("%d ", topo->numeros.num);
        *result = (*result) * topo->numeros.num;
        topo = topo->proximo;
    }
}


int main(){
    int num, *result = 1;
    No *desempilha, *topo = NULL;


    printf("Digite o numero que voce quer fazer o calculo fatorial: \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        topo = empilhar(topo, num-i);
    }

    imprimir(topo, &result);
    printf("= %d", result);

    return 0;
}
