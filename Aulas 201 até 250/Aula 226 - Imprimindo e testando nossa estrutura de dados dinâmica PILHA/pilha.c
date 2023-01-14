#include <stdio.h>

/*
    Aula 226 - Imprindo e testando\
*/

typedef struct{
    int dia, mes, ano;
}Data;


typedef struct{
    char nome[50];
    Data data;
}Pessoa;


Pessoa ler_pessoa(){
    Pessoa p;
    printf("Digite o nome e data de nascimento dd  mm aaaa: \n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}


Pessoa imprimir_Pessoa(Pessoa p){
    printf("Nome : %sData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}


typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;


// Função para operação push (empilhar)
No* empilhar(No * topo){  // N* = Um ponteiro para um nó
    No *novo = malloc(sizeof(No));

    if(novo){   // Verfica de a memoria foi alocada
        novo->p = ler_pessoa();   // novo->p recebe a função que ler os dados de uma pessoa 
        novo->proximo = topo; // Recebe o ponteiro topo que inicialmente é NULL
        return novo;  // Retorna o novo
    }
    else
        printf("\nErro ao alocar memoria...\n");
    return NULL;
}


No* desempilhar(No **topo){  // Tem que usar ** para passar por referência, pois se usar só um a passagem do parametro vai ser por cópia
    if(*topo != NULL){
        No *remover = *topo;  // Remover recebe o elemento do topo
        *topo = remover->proximo;  // O topo vai ser o próximo elemento após o topo
        return remover;   // Retorna o elemento removido
    }
    else
        printf("Pilha vazia!\n");
    return NULL;
}


void imprimir_pilha(No *topo){
    printf("\n------------------- PILHA -------------------\n");

    while(topo != NULL){
        imprimir_Pessoa(topo->p);  // Imprimindo o topo
        topo = topo->proximo;  // Colocando tedas as outras posições no topo até ser NULL
    }

    printf("\n----------------- FIM PILHA -----------------\n");
}



int main(){
    No *remover, *topo = NULL;
    int opcao;

    do{
        printf("0- Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();
        printf("\nOpcao: %d\n", opcao);

        switch(opcao){
            case 1:{
                topo = empilhar(topo);  // Passando o ponteiro topo
                break;
            }
            case 2:{
                remover= desempilhar(&topo);   // Tem que passar o endereço de topo, pq lá dentro da função desempilhar eu quero alterar o conteúdo dessa variável aqui
                if(remover){
                    printf("Elemento removido com sucesso.\n");
                    imprimir_Pessoa(remover->p);
                    free(remover);
                }
                else
                    printf("Sem no a remover.\n");
                break;
            }
            case 3:
                imprimir_pilha(topo);
                break;
        }
    }while(opcao != 0);

    return 0;
}