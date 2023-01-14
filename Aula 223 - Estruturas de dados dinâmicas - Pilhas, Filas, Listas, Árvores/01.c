/*Vetores e matrize em C são estáticos uma vez criados não da para aumentar seu tamanho.

Estruturas de dados dinâmicas:
  Uma estrutura de dados dinâminca ela é fléxivel ela pode crescer e diminuir, podemos inserir e remover itens 

Estruturas mais conhecidas:
-> Pilhas
    -> Toda operação feita em uma pilha será na parte do topo
        - Em uma estrutura pilha temos duas operações:
            -> Push - empilhar, adcionar alguém na pilha 
            -> Pop - Desempilhar, remover alguém da pilha

    -> Detalhe sobre pilhas -> LIFO --> last-in Firt-out (O último a entrar, Primeiro a sair)

-> Filas
     


-> Listas encadeadas
-> Árvores

Em estruturas de dados estáticas para alocar por exemplo um vertor com 100000 itens pode ser que a memória não tenha um espaço de grande em ordem seguencial para alocar esse vetor. Já com estruturas de dinâmicas são pegadas várias partes da memória em lugares separados, assim sendo mais difícil não estorar a memória.

*/


//Exemplo

#include <stdio.h>
#include <stdlib.h>

int main(){

    typedef struct no{

        int dado;
        struct no *proximo;
    }No;


    return 0;
}