#include <stdio.h>
#include <stdlib.h>
/*
    Aula 246 - Lista simples encadeada 
    Como imprimir e testar nossa lista?
*/
typedef struct no{
    int valor;
    struct no *proximo;
}No;

// Procedimento para inserir no inicio
void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    // Verificando se foi alocado memória
    if(novo){
        novo->valor = num; // Valor do novo no e um número que recebeu como parâmetro
        novo->proximo = *lista; // O próximo desse no é o inicio da lista
        *lista = novo; // O inicio da lista atual passar a ser o novo no
    }
    else
        printf("erro ao alocar memória\n");
}

// Procedimento para inserir no fim
void inserir_no_fim(No **lista, int num){ // Int num o arquivo que queremos adionar no fim
    No *auxi,  *novo = malloc(sizeof(No)); // auxi ponteiro auxiliar para o primeiro nó da lista

    if(novo){
        novo->valor = num; // Esse campo valor pode ser qualquer coisa que eu quero por exemplo um float,int, struct eu que escolho
        novo->proximo = NULL; // Colocando o último como nulo

        //Verificando se a lista está vázia
        if(*lista == NULL){ // Se o if for falso temos pelo menos um intem na lista
            *lista = novo;
        }
        else{
            // Quando não for vazia temos que criar um for para verificar até o fim da lista, quando chegar no ultimo devemos fazer esse nó apontar para o novo nó a ser inserido no fim da lita   
            auxi = *lista;  // ponteiro auxiliar para o primeiro no da lista

            while(auxi->proximo){  // Enquanto existir um próximo nossa lista irá caminhar para frente. Quando este teste for falso é pq achamos o item nulo que é o fim da lista
                auxi = auxi->proximo;
            }
            auxi->proximo = novo;   
        }
    }
    else
        printf("Memória não alocada\n");
}

// Procedimento para inserir no meio
void inserir_no_meio(No **lista, int num, int ant){  // ant para vai ser um parâmetro de referência para o ocorrer o envento após o ant
    No *auxi, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        // Verificando se o primeiro item está vazio
        if(*lista == NULL){ // Se for vedadeiro significa que o nosso novo no vai ser o primeiro da lista
            novo->proximo = NULL;
            *lista = novo;
        }
        else{
            auxi = *lista; // auxi aponta para o inicio da lista
            while(auxi->valor != ant && auxi->proximo){ // Nessa segunda parte verificamos se o ant exites, se não exite o ant vai ser o último
                auxi = auxi->proximo;
            }
            novo->proximo = auxi->proximo;
            auxi->proximo = novo;
        }
    }
    else
        printf("Memória não alocada\n");
}

// Imprimir lista encadeada
void imprimir(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ",no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}


int main(){
    int opcao, valor, anterior;
    No *lista = NULL;

    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - Imprimir\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;        
        case 3:
            printf("Digite um valor e o valor de referência: ");
            scanf("%d%d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        
        default:
            if(opcao != 0)
                printf("Opção inválida!\n");
            break;
        }

    }while(opcao != 0);



    return 0;
}
