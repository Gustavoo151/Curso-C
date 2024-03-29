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


void imprimir(No *pilha){  // Recebe um ponteiro para pilha
    printf("Pilha\n");
    while(pilha){  // Enquanto não for NULL mostra o valor da cada No da pilha
        printf("%d\n", pilha->valor );  // Imprimindo os valores dos Nos
        pilha = pilha->proximo;  // Passando o próximo valor para ser o topo da lista, caso isso não seja feito o algoritmo entra em um loop infinito.
    }
}


int fatorial(int num){  // Recebe o valor a ser calculado do fatorial
    No* pilha = NULL, *remover;  // Criando a pilha e empilhando o valor incrementando menos 1 até o número ser 2

    while(num > 1){  // Verifica até num > 1 pois o numero 1 na multiplacação é um valor nulo
        pilha = empilhar(pilha, num);  // Empilhando os valores de num
        num--;  // incrementando menos menos 1
    }

    imprimir(pilha);  // Imprimindo a pilha

    while(pilha){  // Verifica se não chegou até o fim da pilha
        remover = desempilhar(&pilha);  // Recebe o no a ser removido. Tem que passar o endereço do No, pois a função desempliha receve um ponteiro para ponteiro.
        num = num * remover->valor;  // Numero recebe valor no que vai ser desempilha e o multiplica com os valores anterioes. Assim fazendo o cálculo do fatorial.
        free(remover);  // Liberando da memória o No que já foi lido
    }
    return num;  // Retornado o valor do fatorial
}


int main(){
    int valor; 

    printf("Digite um valor maior que zero para o fatorial: "); 
    scanf("%d", &valor);

    printf("Fatorial de %d = %d", valor, fatorial(valor));
    
    return 0;
}