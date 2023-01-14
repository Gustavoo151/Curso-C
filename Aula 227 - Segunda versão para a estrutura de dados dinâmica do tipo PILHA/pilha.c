#include <stdio.h>

/*
    Aula 227 - Segundo metodo de criar uma pilha
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


typedef struct{
    No *topo;
    int tam;
}Pilha;


void criar_pilha(Pilha *p){
    p->topo = NULL;
    p->tam = 0;
}

// Função para operação push (empilhar)
void empilhar(Pilha *p){
    No *novo = malloc(sizeof(No));

    if(novo){   // Verfica de a memoria foi alocada
        novo->p = ler_pessoa();   
        novo->proximo = p->topo; 
        p->topo = novo;
        p->tam++;
    }
    else
        printf("\nErro ao alocar memoria...\n");
}


No* desempilhar(Pilha *p){ 
    if(p->topo){
        No *remover = p->topo;
        p->topo = remover->proximo; 
        p->tam--;
        return remover;   // Retorna o elemento removido
    }
    else
        printf("Pilha vazia!\n");
    return NULL;
}


void imprimir_pilha(Pilha *p){
    No *aux = p->topo;
    printf("\n------------------- PILHA Tam: %d ---------------\n", p->tam);
    while(aux){
        imprimir_Pessoa(aux->p);  // Imprimindo o topo
        aux = aux->proximo;  // Colocando tedas as outras posições no topo até ser NULL
    }
    printf("\n----------------- FIM PILHA -----------------\n");
}



int main(){
    No *remover;
    Pilha p;
    int opcao;

    criar_pilha(&p);

    do{
        printf("0- Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();
        printf("\nOpcao: %d\n", opcao);

        switch(opcao){
            case 1:{
                empilhar(&p);
                break;
            }
            case 2:{
                remover= desempilhar(&p);   // Tem que passar o endereço de topo, pq lá dentro da função desempilhar eu quero alterar o conteúdo dessa variável aqui
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
                imprimir_pilha(&p);
                break;
        }
    }while(opcao != 0);

    return 0;
}