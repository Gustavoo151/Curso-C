#include <stdio.h>
#include <stdlib.h>

/*
    Aula 229: Como simular a recursao do fatorial com uma pilha?
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


void mostraConteudo(No *n){
    printf("%d X ", n->numeros.num);
}

void imprimir(No *topo){
    while (topo != NULL){
        printf("%d X ", topo->numeros.num);
        topo = topo->proximo;
    }
}



int main(){
    int num;
    No *topo = NULL;


    printf("Digite o numero que voce quer fazer o calculo fatorial: \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        topo = empilhar(&topo, num-i);
    }

    imprimir(&topo);


    return 0;
}
