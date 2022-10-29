#include <stdio.h>
#include <stdlib.h>

//  Aula 188: Um vetor é sempre um ponteiro?

/*
    Quando nós temos um vetor (um conjuto de elemetos), ai quano eu passo um nome do vetor como parâmetro o computador não faz uma cópia desse conjuto de elementos pois seria muito custoso. Toda vez que passamos um vetor como parâmetro para uma função ou procedimento o que está sendo recebido é um apontador. Consequentimente qualquer alteração feita isso vai ser refletir dentro da função principal.
*/

void multiplica(int vet[], int tam){

    for (int i = 0; i < 10; i ++)
        vet[i] = vet[i] * 2;
    printf("\n");
}

void imprimir(int vet[], int tam){

    for (int i = 0; i < 10; i ++)
        printf("%d ", vet[i]);
    printf("\n");
}

int main(){

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    imprimir(vet, 10);

    multiplica(vet, 10);

    imprimir(vet, 10);


    return 0;
}