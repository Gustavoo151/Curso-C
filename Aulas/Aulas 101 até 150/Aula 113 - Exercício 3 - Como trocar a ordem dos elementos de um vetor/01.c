/*
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.
*/

#include <stdio.h>

int main() {

    int vetor[20], copia, fim = 19;

    for (int i = 0; i < 20; i++){
        printf("Digite o valor para posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("VETOR ORIGINAL: ");
    for (int i = 0; i < 20; i ++)
        printf("%2d ", vetor[i]);


    for (int i = 0; i < 10; i ++){
        copia = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = copia;
        fim --;
    }

    printf("\nVETOR INVERSO: ");
    for (int i = 0; i < 20; i++)   
        printf("%2d ", vetor[i]);
    
    printf("\n");

    return 0;
}