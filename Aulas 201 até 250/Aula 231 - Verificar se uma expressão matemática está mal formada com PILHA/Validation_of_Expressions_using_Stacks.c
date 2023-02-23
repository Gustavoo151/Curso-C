#include <stdio.h>
#include <stdlib.h>
/*
        Aula 231: Como descobrir se uma expressão matemática está mal formada?

        3 * [(5 - 2) / 5]
        3 * [(5 - 2) / 5

Como funciona:
    ->Para poder testa vamos transformar a equação matemática em vetor de caracteres como uma string.
    -> Basicamente o processo para verificar se uma expressão está bem formada ou não é toda vez que eu encotrar a abertura de um desses elementos [],() ou {}. Toda vez que eu encontrar a abertura de um desses elementos eu preciso procurar pelo fechamento desse mesmo elemento.
*/

typedef struct no{
    char caracter;
    struct No *proximo;
}No;


No* empilhar(No *pilha, char valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->caracter = valor;
        novo->proximo = pilha;
        return novo;
    }
    else
        printf("Erro ao alocar memoria!\n");
    return NULL;
}


No* desempilhar(No **pilha){
    No *remover = NULL;

    if(pilha){
        remover = *pilha;  // Remover recebe o topo da pilha
        *pilha = remover->proximo;  // Topo da pilha agora é o próximo No
    }
    else
        printf("Lista vazia!\n");
    return remover;  // Retorna remover que é o topo da lista já com o nó anterior removido ou o No NULL caso não entre no if
}


void imprimir(No *pilha){
    printf("Pilha:\n\n");

    while(pilha){
        printf("%c\n", pilha->caracter);
        pilha = pilha->proximo;
    }
    printf("FIM PILHA\n");
}

//Funçãoa para informar se formou um par
int forma_par(char f, char d){  // Caractere de fechamente e caracteres desempilhado
    printf("Forma : %c e %c \n", f, d);
    switch(f){  // Switch para verificar se caractere de fechamento é igual ao do topo da pilha se for retorna True se não for retornar False
        case ')':{
            if (d  == '(' )
                return 1;  // Bem formada
            else
                return 0;  // Mal formada
            break;
        }
        case ']':{
            if (d == '[')
                return 1;
            else 
                return 0;
            break;
        }
        case '}':{
            if(d == '{')
                return 1;
            else
                return 0;
            break;
        }
    }
}


int identifica_formacao(char x[]){  // Recebe a string com a expressão
    int i = 0;
    No *remover, *pilha = NULL;

    while(x[i] != '\0'){  // Faz um loop até o fim do arraya
        if ((x[i] == '[') || (x[i] == '{') || (x[i] == '(')){  // Verifica se tem alguma de abertura
            pilha = empilhar(pilha, x[i]);  // Recebe o topo da pilha salta no No pilha
            imprimir(pilha);  // Imprime a pilha
        }
       else if ((x[i] == ']') || (x[i] == '}') || (x[i] == ')')){  // Verifca se está recebendo alguma fechamento de expressão.
            remover = desempilhar(&pilha);
            printf("%c -- %c\n", x[i], remover->caracter);
            printf("%d \n", forma_par(x[i], remover->caracter));
            
            if(forma_par(x[i], remover->caracter) == 0){   // Se o retorno de forma_par for False então os dois caracteres são diferentes
                printf("\tEXPRESSAO MAL FORMADA!\n");
                return 1;  // Return 1 representa que a expressõa está mal formada
            }
            free(remover);
        }
        i++;
    }
    imprimir(pilha);
    if(pilha){  // Verificando se a pilha está vazia se ela não estiver então a expressão está mal formada pos nem todos tiveram par.
        printf("\tExpressao mal formada!\n");
        return 1;
    }
    else{
        printf("\tEXPRSSAO BEM FORMADA!\n");
        return 0;
    }
}


int main(){
    char exp[50] = {'{', '3', '*', '[', '(', '5', '-', '2', ')', '/', '5',']', '}'};

   // printf("Digite uma expressao: ");
   // scanf("%49[^\n]", exp);
    printf("\nA expressao: %s\nRetorno: %d", exp, identifica_formacao(exp));
    return 0;
}