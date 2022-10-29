#include <stdio.h>
#include <stdlib.h>
/*
        Aula 159: Implemente uma função recursiva que, dados dois números inteiros
        x e n, calcular e retorne o valor de x elevado a n.
*/
int potencia(int x, int n){
    if (n == 0)  // Caso base
        return 1;
    else   
        return x * potencia(x, n - 1);
}

int main(){

    int x, n;

    printf("Digite um número e seu expoente: ");
    scanf("%d %d", &x, &n);

    printf("%d elevado a %d: %d\n", x, n, potencia(x, n));

    return 0;
}