#ifndef PILHA_H_INCLUDED  // Se ainda não tiver nenhuma definição com PILHA_H_INCLUDED então coloque tudo que está no if
#define PILHA_H_INCLUDED

typedef struct no{
    int valor;
    struct no *proximo;
}No;

No* empilhar(No *pilha, int num);

No* desempilhar(No **pilha);

void imprimir(No *pilhar);

#endif   //  PILHA_H_INCLUDED