#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exercício

    4) Notação pós-fixa polonosa revesa (calculadores HP)
    Infixa                      Pós-Fixa              
    (51+13*12)                  51 13 12 * +                R = 207
    (5*(3+2)/4-6)               5 3 2 + * 4 / 6 -           R = 0.25
    (5+3+2*4-6*7*1)             5 3 + 2 4 * + 6 7 * 1 * -   R = -26
    (5*(3+(2*(4+(6*(7_1))))))   5 3 2 4 6 7 + * + * + *     R = 535
*/

typedef struct no{
    float valor;
    struct no *proximo;
}No;


No* empilhar(No *pilha, float num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    }
    else
        printf("Erro ao alocar memoria!/n");
    return NULL;
}


No* desempilhar(No **pilha){
    No *remover = NULL;

    if(*pilha){
        remover = *pilha;
        *pilha = remover->proximo;
    }
    else   
        printf("Pilha vazia\n");
    return remover;
}


float operacao(float a, float b, char x){

    switch (x){
    case '+':
        return a + b; 
        break;

    case '-':
        return a - b;
        break;

    case '/':
        return a / b;
        break;

    case '*':
        return a * b;
        break;
    
    default:
        return 0.0;
    }
}


float resolverExpressao(char x[]){
    char *pt;
    No *n1, *n2, *pilha = NULL;
    float num;

    pt = strtok(x, " ");   
    while(pt){
        if (pt[0] == '+' || pt[0] == '-' || pt[0] == '/' || pt[0] == '*'){
            n1 = desempilhar(&pilha);
            n2 = desempilhar(&pilha);
            num = operacao(n2->valor, n1->valor, pt[0]);
            pilha = empilhar(pilha, num);
            free(n1);
            free(n2);
        }
        else{
            num = strtol(pt, NULL, 10);
            pilha = empilhar(pilha, num);
        }
        pt = strtok(NULL, " ");
    }
    n1 = desempilhar(&pilha);
    num = n1->valor;
    free(n1);
    return num;
}



int main(){
    char exp[50] = {"5 3 2 + * 4 / 6 -"};

    printf("Resultado de %s: %.3f\n", exp, resolverExpressao(exp));

    return 0;
}