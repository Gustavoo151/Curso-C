#include <stdio.h>
#include <stdlib.h>

//  Aula 189:Aritmética de ponteiros com vetor

void imprimir(int vet[], int tam){

    for (int i = 0; i < 10; i ++)
        printf("%d ", *vet + i);  // Para imprimir usando aritemetica de ponteiros basa colocar o * na frente e adicionar um número (O computador vai entender que queremos ulitilar o próximo endereço de memória)
    printf("\n");
}

void imprimir2(int vet[], int tam){

    for (int i = 0; i < 10; i ++)
        printf("%d ", *(vet + i));  // Colocando *(vet +i), para somar direito
    printf("\n");
}

int main(){

    int vet[10] = {17,2,3,14,5,46,7,8,9,10}; 
    
    imprimir(vet, 10); // O valor foi impresso diferente, isso aconteceu porque o ele está somando i ao primeiro elemeto apontado. Pq está assim *vet + i, o certo seria *(vet + i)

    imprimir2(vet,10); // Usando do jeito certo *(vet + i) na função

    return 0;
}