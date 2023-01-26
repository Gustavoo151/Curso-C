#include <stdio.h>
#include <stdlib.h>

/*
        Aula 229: Como simular a recursão do fatorial com uma pilha?
*/

typedef struct no{   // Criando e estrurura para pilha
    int valor;
    struct no *proximo;  // ligando o no atual com o próxi,p
}No;


No* empilhar(No *pilha, int num){  // Passando como paremetro o no pilha e o numero que queremos empilhar
    No *novo = malloc(sizeof(No));  // Alocando memoria

    if (novo){  // Verificando se a memoria foi alocar corretamente
        novo->valor = num;  // Passando o valor num para para o No novo
        novo->proximo = pilha; // Colocando o No no topo da pilha
        return novo;  // Retornando o No novo
    }
    else
        printf("Erro ao alocar memoria.\n");
    return NULL;  // Retornando nulo caso não consiga alocar a memoria
}


No* desempilhar(No **pilha){  // Usando dois ** para passar o No por referência
    No *remover = NULL;  // No que queremos remover

    if(*pilha){  // Verificando se a pilha não está vazia
        remover = *pilha;  // O No remover vai receber o conteúdo apontado pela pilha
        *pilha = remover->proximo;  // Atualizando topo da pilha como o próximo No
    }
    else 
        printf("Pilha vazia\n");
    
    return remover;  // O No remover aponta para o topo da pilha
}


void imprimir(No *pilha){
    printf("Pilha\n");
    while(pilha){
        printf("%d\n", pilha->valor );
        pilha = pilha->proximo;
    }
}


int fatorial(int num){
    No* pilha = NULL, *remover;

    while(num > 1){
        pilha = empilhar(pilha, num);
        num--;
    }

    imprimir(pilha);

    while(pilha){
        remover = desempilhar(&pilha);
        num = num * remover->valor;
        free(remover);
    }
    return num;  // Retornado o val
}


int main(){
    int valor; 

    printf("Digite um valor maior que zero para o fatorial: "); 
    scanf("%d", &valor);

    printf("Fatorial de %d = %d", valor, fatorial(valor));
    
    return 0;
}