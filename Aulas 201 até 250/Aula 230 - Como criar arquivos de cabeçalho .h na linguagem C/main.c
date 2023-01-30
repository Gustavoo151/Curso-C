#include <stdio.h>  // Quanda usa sinal de <> para inportar os hearders o compilado entende que é para buscar dos direitorios padrões do C
#include <stdlib.h>
#include "pilha.h"  // Utilizasse aspa duplas para indicar para o compilador que é para procurar os headers no meu projeto se não encontrar então procura nos diretorios padrões

/*
    Aula 230: Como criar arquivos de cabeçalho .h?
*/

int fatorial(int num){
    No *remover, *pilha = NULL;

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
    return num;
}


int main(){

    int valor;

    printf("Digite um valor maior que zero para o fatorial: ");
    scanf("%d", &valor);
    printf("\nFatorial de %d: %d\n", valor , fatorial(valor));

    return 0;
}