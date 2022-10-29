#include <stdio.h>

int main(){

    int num2[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o valor do vetor: ");
        scanf("%d", &num2[i]);
    }

    for (int i = 0; i < 10; i++){
        printf("%d ", num2[i]);
    }

    return 0;
}