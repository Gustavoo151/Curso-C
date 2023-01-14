#include <stdio.h>
#include <stdlib.h>

/*      Aula 224: Estrutura de dados dinâmicas - Adicionando na fila*/

typedef struct {
    int dia, mes, ano;
}Data;

typedef struct {
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

typedef struct no {
    Pessoa p;
    struct no *proximo;
}No;

// Função para operação push (empilhar)
No* empilhar(No *topo){  // N* = Um ponteiro para um nó

    No *novo = malloc(sizeof(No));

    if (novo){  // Verfica de a memoria foi alocada
        novo->p = ler_pessoa();  // novo->p recebe a função que ler os dados de uma pessoa 
        novo->proximo = topo;  // Recebe o ponteiro topo que inicialmente é NULL
        return novo;  // Retorna o novo
    }
    else
        printf("\nErro ao alocar memoria...\n");
    return NULL;
}




int main(){

    No *topo = NULL;
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
            
            case 2:

                break;;

            case 3:
    
                break;
        }


    }while(opcao != 0);

    return 0;
}