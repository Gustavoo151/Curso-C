#include <stdio.h>

int main() {

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o elemento da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++)
        vetor[i] = vetor[i] * 3;  // Multiplicando o vetor por 3

    printf("\n\n");
    for (int i = 0; i < 10; i++)
        printf("%d\n", vetor[i]);  

    return 0;
}