#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//      Aula 149: Função que retorna a soma da linha da matriz

int tam = 5;

// Função que calcula e soma a linha de matriz
int somarLinha(int linhaSoma,int matriz[][5]){ // Só precisa fornecer a quantidade de colunas
    int soma = 0;

    for(int i = 0; i < 5; i++)
        soma += matriz[linhaSoma-1][i];
    return soma;
} 

void imprimir(int matriz[][5]){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

int main(){

    int linhaSoma,matriz[5][5];

    srand(time(NULL));  

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    
    imprimir(matriz);

    printf("Digite qual linha você quer somar: ");
    scanf("%d", &linhaSoma);

    // Passando a linha a ser somada e a matriz
    printf("Soma da linha 5: %d\n", somarLinha(linhaSoma, matriz));

    return  0;
}