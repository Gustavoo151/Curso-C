#include <stdio.h>
#include <stdlib.h>
/*
    Aula 163: Dado um vetor de inteiros e o seu número de elementos, iverta a posição dos seus elementos usando recursão  
*/
void inverter(int v[], int ini, int fim){
    int aux;
    if(ini < fim){
        aux = v[ini];
        v[ini] = v[fim];
        v[fim] = aux;
        inverter(v, ini +1, fim -1);
    }
}

void imprimir(int v[], int tam){
    if(tam == 1)
        printf("%d, ", v[tam -1]);
    else{
       imprimir(v, tam -1);
       printf("%d, ", v[tam -1]); 
    }
}

int main(){

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    imprimir(vet, 10);

    inverter(vet, 0, 9);

    printf("\n");
    imprimir(vet, 10);


    return 0;
}