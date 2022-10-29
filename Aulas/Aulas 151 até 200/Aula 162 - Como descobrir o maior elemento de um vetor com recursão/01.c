#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    162: Desevolva uma função recursiva que encontre o maior valor elemento de um vetor de inteiros de tamanho N.
*/

int maior(int v[], int tam, int indice){

    if (tam == 0)
        return v[indice];
    else{
        if(v[tam - 1] > v[indice])
            return maior(v, tam -1, tam -1);
        else
            return maior(v, tam -1, indice);
    }
}


int main(){

    int vet[10] = {11, 258, 13, 445, 5558, 67, 7, 8, 9, 10};

    printf("Maior: %d \n", maior(vet, 10, 0));

    return 0;
}