#include <stdio.h>
#include <stdlib.h>
/*
    Aula 164: Faça um procedimento recursivo para converter um númreo decimal n para sua forma binária
*/
void binario(int n){
    if(n == 0)
        printf("%d", n);
    else
        binario(n/2);
        printf("%d", n%2);
}


int main(){

    int n;

    printf("Digite um valor decimal: ");
    scanf("%d", &n);

    binario(n);
    printf("\n");

    return 0;
}