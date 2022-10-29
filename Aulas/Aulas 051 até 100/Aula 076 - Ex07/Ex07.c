/*
7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.
*/

#include <stdio.h>

int main(){

    int valor;

    printf("Digite um valor: "); 
    scanf("%d", &valor);

    for (int i = 0; i <= valor; i += 2)
        printf("O quadrado de %d é %d\n", i, i*i);

    return 0;
}