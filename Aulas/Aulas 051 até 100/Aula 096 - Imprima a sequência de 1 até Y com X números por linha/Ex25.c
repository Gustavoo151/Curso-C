/*
25) Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y,
passando para a próxima linha a cada X números.
Exemplo de entrada:
3 99
Exemplo de saída:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99
*/

#include <stdio.h>

int main() {

    int x, y, contador = 1;

    printf("Digite os valores de X, Y: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i += x)
    {
        for (int c = 1; c <= x; c ++){
            printf("%3d ", contador);
            contador ++;
        }
        printf("\n");
    }   
    
    return 0;
}