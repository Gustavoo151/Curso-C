#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
        Aula 199: Como alocar um vetor dinâmico?
*/

int main(){

    int tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam); 
    srand(time(NULL));


    vet = malloc(sizeof(int)* tam);

    if(vet){
        printf("Memória alocada com sucesso.");

        for(int i=0; i < tam; i++)
            *(vet + i) = rand() % 100;

        for(int i = 0; i < tam; i++)
            printf("%d ", *(vet +i));  
            
        printf("\n");
    }
    else
        printf("Erro ao alocar memória");

    return 0;
}