#include <stdio.h>
#include <stdio.h>
/*
        Aula 160: Desenvolva uma função recursiva que calcule a soma dos números inteiros de 1 a N.
*/
int somatorio(int n){
    if (n == 0)
        return 0;
    else 
        return n + somatorio(n - 1);
}

int main(){

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("O somatório de 1 até %d é: %d\n", n, somatorio(n));

    return 0;
}